#ifndef GAL_IMAGE2ASCII_COLOR_HPP
#define GAL_IMAGE2ASCII_COLOR_HPP

#include <optional>

namespace gal::image2ascii {
	struct Color {
		float red;
		float green;
		float blue;
		std::optional<float> alpha;

		explicit Color(
				float r = 0.0f, float g = 0.0f, float b = 0.0f,
				decltype(alpha) a = std::nullopt) noexcept
			: red(r),
			  green(g),
			  blue(b),
			  alpha(a) {}

		Color& operator+=(const Color& rhs) noexcept {
			red += rhs.red;
			green += rhs.green;
			blue += rhs.blue;

			return *this;
		}

		[[nodiscard]] Color operator+(const Color& rhs) const noexcept {
			auto c = *this;
			c.operator+=(std::forward<const Color&>(rhs));

			return c;
		}

		Color& operator-=(const Color& rhs) noexcept {
			red -= rhs.red;
			green -= rhs.green;
			blue -= rhs.blue;

			return *this;
		}

		[[nodiscard]] Color operator-(const Color& rhs) const noexcept {
			auto c = *this;
			c.operator-=(std::forward<const Color&>(rhs));

			return c;
		}

		[[nodiscard]] bool operator==(const Color& rhs) const noexcept {
			return red == rhs.red && green == rhs.green && blue == rhs.blue;
		}

		[[nodiscard]] bool same(const Color& rhs) const noexcept {
			return this->operator==(std::forward<const Color&>(rhs)) && alpha == rhs.alpha;
		}

		void opacity_to(decltype(alpha) new_alpha) noexcept {
			alpha = new_alpha;
		}

		[[nodiscard]] Color opacity(decltype(alpha) new_alpha) const noexcept {
			auto c = *this;
			c.opacity_to(new_alpha);

			return c;
		}

		void level_to(decltype(red) amount) noexcept {
			red *= amount;
			green *= amount;
			blue *= amount;
		}

		[[nodiscard]] Color level(decltype(red) amount) const noexcept {
			auto c = *this;
			c.level_to(amount);

			return c;
		}
	};
}// namespace gal::image2ascii

#endif//GAL_IMAGE2ASCII_COLOR_HPP
