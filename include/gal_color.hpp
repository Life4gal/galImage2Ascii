#ifndef GAL_IMAGE2ASCII_COLOR_HPP
#define GAL_IMAGE2ASCII_COLOR_HPP

#include <optional>

namespace gal::image2ascii {
	struct Color {
		using value_type = float;

		value_type red;
		value_type green;
		value_type blue;

		// because optional is a template type
		// so those functions with alpha participation (and the functions called in them must be visible in the header file)
		std::optional<value_type> alpha;

		explicit Color(
				value_type r = {}, value_type g = {}, value_type b = {},
				decltype(alpha) a = {}) noexcept;

		Color& operator+=(const Color& rhs) noexcept;

		[[nodiscard]] Color operator+(const Color& rhs) const noexcept;

		Color& operator-=(const Color& rhs) noexcept;

		[[nodiscard]] Color operator-(const Color& rhs) const noexcept;

		[[nodiscard]] bool operator==(const Color& rhs) const noexcept {
			return red == rhs.red && green == rhs.green && blue == rhs.blue;
		}

		[[nodiscard]] bool same(const Color& rhs) const noexcept {
			return alpha == rhs.alpha && this->operator==(std::forward<const Color&>(rhs));
		}

		void opacity_to(decltype(alpha) new_alpha) noexcept {
			alpha = new_alpha;
		}

		[[nodiscard]] Color opacity(decltype(alpha) new_alpha) const noexcept {
			auto c = *this;
			c.opacity_to(new_alpha);

			return c;
		}

		void level_to(value_type amount) noexcept;

		[[nodiscard]] Color level(value_type amount) const noexcept;
	};
}// namespace gal::image2ascii

#endif//GAL_IMAGE2ASCII_COLOR_HPP
