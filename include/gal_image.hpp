#ifndef GAL_IMAGE2ASCII_IMAGE_HPP
#define GAL_IMAGE2ASCII_IMAGE_HPP

#include <gal_pixmap.hpp>

namespace gal::image2ascii::util {

	enum class image_load_state {
		NULL_FILENAME,
		LOAD_FILE_FAILED,
		INCOMPATIBLE_FORMAT,
		SUCCESS
	};

	enum class image_save_state{
		NULL_FILENAME,
		NO_SPACE_TO_WRITE,
		NOT_ENOUGH_MEMORY,
		WRITE_FAILED,
		SUCCESS
	};

	image_load_state load_image(const char* filename, Pixmap& output);

	image_save_state save_as_png(const char* filename, const Pixmap& input);
	image_save_state save_as_bmp(const char* filename, const Pixmap& input);
	image_save_state save_as_tga(const char* filename, const Pixmap& input);
	image_save_state save_as_hdr(const char* filename, const Pixmap& input);
}// namespace gal::image2ascii::util

#endif//GAL_IMAGE2ASCII_IMAGE_HPP
