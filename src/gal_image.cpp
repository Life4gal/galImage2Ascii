#include <gal_image.hpp>
#include <memory>

#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include <stb_image.hpp>
#include <stb_image_write.hpp>

struct image_load_deleter
{
	auto operator()(void* p)
	{
		return stbi_image_free(p);
	}
};
struct image_output_deleter
{
	auto operator()(void* p)
	{
		return free(p);
	}
};

// todo: if use dumb ptr, we got segmentation fault(and memory leak...) because we got a nullptr after save_as (but we have a heap address in save_as) like
// unsigned char* data = nullptr;
// auto result = save_as(filename, std::forward<const Pixmap&>(input), data);
using image_load_ptr = std::unique_ptr<unsigned char, image_load_deleter>;
using image_output_ptr = std::unique_ptr<unsigned char, image_output_deleter>;

namespace {
	using namespace gal::image2ascii;
	using namespace util;

	// do not forget free output data!!!
	// just for png,bmp,tga
//	image_save_state save_as(const char* filename, const Pixmap& input, unsigned char* output) {
	image_save_state save_as(const char* filename, const Pixmap& input, image_output_ptr& output) {
		if (filename == nullptr) return image_save_state::NULL_FILENAME;

		auto width = input.get_width();
		auto height = input.get_height();
		if (width == 0 || height == 0) return image_save_state::NO_SPACE_TO_WRITE;

//		output = static_cast<unsigned char*>(malloc(width * height * 4));
		output.reset(static_cast<unsigned char*>(malloc(width * height * 4)));
		if (output == nullptr) return image_save_state::NOT_ENOUGH_MEMORY;

		auto data = output.get();
		for (auto x = 0; x < width; ++x) {
			for (auto y = 0; y < height; ++y) {
				auto curr = 4 * (y * width + x);

				auto [red, green, blue, alpha] = input.sample(x, y);

				data[curr] = static_cast<unsigned char>(red >= 1 ? 255 : red * 255);
				data[curr + 1] = static_cast<unsigned char>(green >= 1 ? 255 : green * 255);
				data[curr + 2] = static_cast<unsigned char>(blue >= 1 ? 255 : blue * 255);

				auto a = alpha.value_or(1);
				data[curr + 3] = static_cast<unsigned char>(a >= 1 ? 255 : a * 255);
			}
		}

		return image_save_state::SUCCESS;
	}
}// namespace

namespace gal::image2ascii::util {
	image_load_state load_image(const char* filename, Pixmap& output) {
		if (filename == nullptr) return image_load_state::NULL_FILENAME;

		int width;
		int height;
		int bpp;
		image_load_ptr input{stbi_load(filename, &width, &height, &bpp, 0)};

		if (input == nullptr) return image_load_state::LOAD_FILE_FAILED;

		//		output.clear_and_reset(width, height);
		// clear should be no necessary if overwrite every pixel
		output.resize(width, height);

		auto result = image_load_state::SUCCESS;
		auto data = input.get();

		using color_value_type = Color::value_type;
		if (bpp == 3) {
			for (auto x = 0; x < width; ++x) {
				for (auto y = 0; y < height; ++y) {
					auto curr = bpp * (y * width + x);

					output.sample(x, y) = Color{static_cast<color_value_type>(data[curr]) / 255, static_cast<color_value_type>(data[curr + 1]) / 255, static_cast<color_value_type>(data[curr + 2]) / 255, 1};
				}
			}
		} else if (bpp == 4) {
			for (auto x = 0; x < width; ++x) {
				for (auto y = 0; y < height; ++y) {
					auto curr = bpp * (y * width + x);

					output.sample(x, y) = Color{static_cast<color_value_type>(data[curr]) / 255, static_cast<color_value_type>(data[curr + 1]) / 255, static_cast<color_value_type>(data[curr + 2]) / 255, static_cast<color_value_type>(data[curr + 3]) / 255};
				}
			}
		} else {
			result = image_load_state::INCOMPATIBLE_FORMAT;
		}

		return result;
	}

	image_save_state save_as_png(const char* filename, const Pixmap& input) {
		image_output_ptr data;
		auto result = save_as(filename, std::forward<const Pixmap&>(input), data);

		if (result != image_save_state::SUCCESS) {
			return result;
		}

		auto write = stbi_write_png(filename, input.get_width(), input.get_height(), 4, data.get(), static_cast<int>(input.get_width()) * 4);

		return write == 1 ? image_save_state::SUCCESS : image_save_state::WRITE_FAILED;
	}

	image_save_state save_as_bmp(const char* filename, const Pixmap& input) {
		image_output_ptr data = nullptr;
		auto result = save_as(filename, std::forward<const Pixmap&>(input), data);

		if (result != image_save_state::SUCCESS) {
			return result;
		}

		auto write = stbi_write_bmp(filename, input.get_width(), input.get_height(), 4, data.get());

		return write == 1 ? image_save_state::SUCCESS : image_save_state::WRITE_FAILED;
	}

	image_save_state save_as_tga(const char* filename, const Pixmap& input) {
		image_output_ptr data = nullptr;
		auto result = save_as(filename, std::forward<const Pixmap&>(input), data);

		if (result != image_save_state::SUCCESS) {
			return result;
		}

		auto write = stbi_write_tga(filename, input.get_width(), input.get_height(), 4, data.get());

		return write == 1 ? image_save_state::SUCCESS : image_save_state::WRITE_FAILED;
	}

	// it is not cost-effective to adapt save_as to hdr and we will no need to give a lambda to deal with the color of r/g/b/a
	image_save_state save_as_hdr(const char* filename, const Pixmap& input) {
		if (filename == nullptr) return image_save_state::NULL_FILENAME;

		auto width = input.get_width();
		auto height = input.get_height();

		auto data = static_cast<float*>(malloc(width * height * 4 * sizeof(float)));

		if (data == nullptr) return image_save_state::NOT_ENOUGH_MEMORY;

		for (auto x = 0; x < width; ++x) {
			for (auto y = 0; y < height; ++y) {
				auto curr = 4 * (y * width + x);

				auto [red, green, blue, alpha] = input.sample(x, y);

				data[curr] = red;
				data[curr + 1] = green;
				data[curr + 2] = blue;

				auto a = alpha.value_or(255);
				data[curr + 3] = a;
			}
		}

		auto result = stbi_write_hdr(filename, width, height, 4, data);
		free(data);

		return result == 1 ? image_save_state::SUCCESS : image_save_state::WRITE_FAILED;
	}

}// namespace gal::image2ascii::util
