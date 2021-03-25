#ifndef GAL_IMAGE2ASCII_EXEC_ARGS_PARSER_HPP
#define GAL_IMAGE2ASCII_EXEC_ARGS_PARSER_HPP

#include <cxxopts.hpp>
#include <iostream>

namespace gal::image2ascii::exec {
	struct Image {
		using size_type = size_t;

		size_type width;
		size_type height;
		float threshold;
		bool invert;
		std::string filepath;
	};

	class Parser {
	public:
		enum class parse_state {
			ASK_HELP,
			INVALID_ARGUMENT,
			SUCCESS
		};

		explicit Parser();

		parse_state setup(int argc, const char* const* argv, Image* image);

		void print_help();

	private:
		cxxopts::Options options;
	};
}// namespace gal::image2ascii::exec

#endif//GAL_IMAGE2ASCII_EXEC_ARGS_PARSER_HPP
