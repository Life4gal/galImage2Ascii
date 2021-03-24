#ifndef GAL_IMAGE2ASCII_BUFFER_HPP
#define GAL_IMAGE2ASCII_BUFFER_HPP

#include <type_traits>
#include <vector>

namespace gal::image2ascii::util {
	// todo: not necessary
//	template<typename T>
//	struct Buffer {
//		using value_type = std::remove_reference_t<T>;
//		using wrap_type = std::vector<value_type>;
//		using size_type = wrap_type::size_type;
//
//		Buffer() : data() {}
//
//		Buffer(const Buffer& rhs) : data(std::exchange(rhs.data, data)) {}
//		Buffer& operator=(const Buffer& rhs) {
//			data = std::exchange(rhs.data, data);
//		}
//
//		std::vector<value_type> data;
//	};

	template<typename T>
	using buffer = std::vector<T>;

}// namespace gal::image2ascii::util

#endif//GAL_IMAGE2ASCII_BUFFER_HPP
