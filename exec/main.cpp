#include <gal_image.hpp>
#include <gal_sample.hpp>
#include <gal_args_parser.hpp>

using namespace gal::image2ascii;

constexpr char ascii_glyphs[] = {
		' ', '.', ',', ':', ';', 'i', 't', '%', 'X', '$', '@', '#'};
constexpr auto ascii_glyphs_size = std::size(ascii_glyphs) - 1;

int main(int argc, const char* const* argv) {
	exec::Parser parser{};
	exec::Image image{};

	if (parser.setup(argc, argv, &image) != exec::Parser::parse_state::SUCCESS) {
		return -1;
	}

	Pixmap pixmap;
	auto result = util::load_image(image.filepath.c_str(), pixmap);

	switch (result) {
		case gal::image2ascii::util::image_load_state::NULL_FILENAME:
			std::cout << "Invalid filepath: " << image.filepath << std::endl;
			parser.print_help();
			return -1;
		case gal::image2ascii::util::image_load_state::LOAD_FILE_FAILED:
			std::cout << "Can not load the file: " << image.filepath << std::endl;
			parser.print_help();
			return -1;
		case gal::image2ascii::util::image_load_state::INCOMPATIBLE_FORMAT:
			std::cout << "Incompatible image format: " << image.filepath << std::endl;
			parser.print_help();
			return -1;
		default:
			break;
	}

	if(!image.output_path.empty())
	{
		// todo: implement it
		util::image_save_state save_result[4];
		save_result[0] = util::save_as_png((image.output_path + ".png").c_str(), pixmap);
		save_result[1] = util::save_as_bmp((image.output_path + ".bmp").c_str(), pixmap);
		save_result[2] = util::save_as_hdr((image.output_path + ".hdr").c_str(), pixmap);
		save_result[3] = util::save_as_tga((image.output_path + ".tga").c_str(), pixmap);

		for(auto r : save_result)
		{
			switch (r) {
				case gal::image2ascii::util::image_save_state::NULL_FILENAME:
					std::cout << "Invalid filepath: " << image.output_path << std::endl;
					parser.print_help();
					return -1;
				case gal::image2ascii::util::image_save_state::NO_SPACE_TO_WRITE:
					std::cout << "Zero size image: " << image.filepath << std::endl;
					parser.print_help();
					return -1;
				case gal::image2ascii::util::image_save_state::NOT_ENOUGH_MEMORY:
					std::cout << "Not enough memory: " << image.filepath << " to " << image.output_path << std::endl;
					parser.print_help();
					return -1;
				case gal::image2ascii::util::image_save_state::WRITE_FAILED:
					std::cout << "Can not write image: " << image.filepath << " to " << image.output_path << std::endl;
					return -1;
				default:
					return 0;
			}
		}
	}

	std::cout << "bilinear_sample:\n";
	for (auto y = 0; y < image.height; ++y) {
		std::string str;
		str.reserve(image.width + 1);
		for (auto x = 0; x < image.width; ++x) {
			auto u = static_cast<float>(x) / image.width;
			auto v = static_cast<float>(y) / image.height;

			auto color = util::bilinear_sample(pixmap, u, v);
			auto luminance = util::luminance(color);

			if (image.invert) {
				luminance = 1.0 - luminance;
			}

			if (luminance < image.threshold) {
				luminance = 0;
			}

			auto c = ascii_glyphs + static_cast<int>(ascii_glyphs_size * luminance);
			str.push_back(*c);
		}
		str.push_back('\n');
		std::cout << str;
	}

	std::cout << "nearest_sample:\n";
	for (auto y = 0; y < image.height; ++y) {
		std::string str;
		str.reserve(image.width + 1);
		for (auto x = 0; x < image.width; ++x) {
			auto u = static_cast<float>(x) / image.width;
			auto v = static_cast<float>(y) / image.height;

			auto color = util::nearest_sample(pixmap, u, v);
			auto luminance = util::luminance(color);

			if (image.invert) {
				luminance = 1.0 - luminance;
			}

			if (luminance < image.threshold) {
				luminance = 0;
			}

			auto c = ascii_glyphs + static_cast<int>(ascii_glyphs_size * luminance);
			str.push_back(*c);
		}
		str.push_back('\n');
		std::cout << str;
	}

	return 0;
}
