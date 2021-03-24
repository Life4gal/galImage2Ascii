#ifndef GAL_IMAGE2ASCII_SAMPLE_HPP
#define GAL_IMAGE2ASCII_SAMPLE_HPP

#include <gal_color.hpp>
#include <gal_pixmap.hpp>

namespace gal::image2ascii::util {
	[[nodiscard]] Color nearest_sample(const Pixmap& input, float u, float v);
	[[nodiscard]] Color bilinear_sample(const Pixmap& input, float u, float v);
}// namespace gal::image2ascii::util

#endif//GAL_IMAGE2ASCII_SAMPLE_HPP
