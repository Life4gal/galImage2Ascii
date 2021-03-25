#ifndef GAL_IMAGE2ASCII_PIXMAP_HPP
#define GAL_IMAGE2ASCII_PIXMAP_HPP

#include <algorithm>
#include <gal_buffer.hpp>
#include <gal_color.hpp>

namespace gal::image2ascii {
	class Pixmap {
	public:
		using size_type = util::matrix<Color>::size_type;

		explicit Pixmap(size_type w = {}, size_type h = {}) noexcept : width(w),
																	   height(h) {
			resize(w, h);
		}

		void resize(size_type w, size_type h) {
			pixels.resize(w);
			for (auto& r: pixels) {
				r.resize(h);
			}
			width = w;
			height = h;
		}

		// this should be no leak for nested resource
		void clear() noexcept {
			pixels.clear();
		}

		void clear_and_reset(size_type w, size_type h) {
			clear();
			resize(w, h);
		}

		[[nodiscard]] Color& sample(size_type pos_x, size_type pos_y) noexcept {
			pos_x = std::clamp(pos_x, size_type{}, width - 1);
			pos_y = std::clamp(pos_y, size_type{}, height - 1);

			return pixels[pos_x][pos_y];
		}

		[[nodiscard]] const Color& sample(size_type pos_x, size_type pos_y) const noexcept {
			pos_x = std::clamp(pos_x, size_type{}, width - 1);
			pos_y = std::clamp(pos_y, size_type{}, height - 1);

			return pixels[pos_x][pos_y];
		}

		[[nodiscard]] size_type get_width() const noexcept {
			return width;
		}

		[[nodiscard]] size_type get_height() const noexcept {
			return height;
		}

	private:
		size_type width;
		size_type height;
		/*
		 * *--------- width ----------*
		 * |
		 * |
		 * |
		 * height
		 * |
		 * |
		 * |
		 *
		 * get color in [x, y] --> pixel[x][y]
		 */
		mutable util::matrix<Color> pixels;
	};
}// namespace gal::image2ascii

#endif//GAL_IMAGE2ASCII_PIXMAP_HPP
