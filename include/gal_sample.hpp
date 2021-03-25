#ifndef GAL_IMAGE2ASCII_SAMPLE_HPP
#define GAL_IMAGE2ASCII_SAMPLE_HPP

#include <cmath>
#include <gal_color.hpp>
#include <gal_pixmap.hpp>

namespace gal::image2ascii::util {
	[[nodiscard]] Color nearest_sample(const Pixmap& input, float u, float v) {
		u = u < 0 ? 0 : (u > 1 ? u - std::floor(u) : u);
		v = v < 0 ? 0 : (v > 1 ? v - std::floor(v) : v);

		auto x = static_cast<Pixmap::size_type>(u * input.get_width());
		auto y = static_cast<Pixmap::size_type>(v * input.get_height());

		return input.sample(x, y);
	}
	[[nodiscard]] Color bilinear_sample(const Pixmap& input, float u, float v) {
		auto width = input.get_width();
		auto height = input.get_height();

		u *= width;
		v *= height;

		// find which pixels participate
		auto u1 = static_cast<Pixmap::size_type>(u) % width;
		auto v1 = static_cast<Pixmap::size_type>(v) % height;
		auto u2 = (u1 + 1) % width;
		auto v2 = (v1 + 1) % height;

		// calculate fractional parts of u and v
		auto frac_u = u - std::floor(u);
		auto frac_v = v - std::floor(v);

		// calculate weight factors
		auto w1 = (1 - frac_u) * (1 - frac_v);
		auto w2 = frac_u * (1 - frac_v);
		auto w3 = (1 - frac_u) * frac_v;
		auto w4 = frac_u * frac_v;

		// fetch four texel
		auto c1 = input.sample(u1, v1).level(w1);
		auto c2 = input.sample(u2, v1).level(w2);
		auto c3 = input.sample(u1, v2).level(w3);
		auto c4 = input.sample(u2, v2).level(w4);

		c1 += c2;
		c1 += c3;
		c1 += c4;
		return c1;
	}

	[[nodiscard]] float luminance(const Color& color) {
		return 0.2126f * color.red + 0.7152f * color.green + 0.0722f * color.blue;
	}
}// namespace gal::image2ascii::util

#endif//GAL_IMAGE2ASCII_SAMPLE_HPP
