#include <gal_color.hpp>

namespace gal::image2ascii {
	Color::Color(value_type r, value_type g, value_type b, decltype(alpha) a) noexcept
		: red(r),
		  green(g),
		  blue(b),
		  alpha(a) {}

	inline Color &Color::operator+=(const Color &rhs) noexcept {
		red += rhs.red;
		green += rhs.green;
		blue += rhs.blue;

		return *this;
	}

	[[nodiscard]] inline Color Color::operator+(const Color &rhs) const noexcept {
		auto c = *this;
		c.operator+=(std::forward<const Color &>(rhs));

		return c;
	}

	inline Color &Color::operator-=(const Color &rhs) noexcept {
		red -= rhs.red;
		green -= rhs.green;
		blue -= rhs.blue;

		return *this;
	}

	[[nodiscard]] inline Color Color::operator-(const Color &rhs) const noexcept {
		auto c = *this;
		c.operator-=(std::forward<const Color &>(rhs));

		return c;
	}

	inline void Color::level_to(value_type amount) noexcept {
		red *= amount;
		green *= amount;
		blue *= amount;
	}

	[[nodiscard]] inline Color Color::level(value_type amount) const noexcept {
		auto c = *this;
		c.level_to(amount);

		return c;
	}
}// namespace gal::image2ascii
