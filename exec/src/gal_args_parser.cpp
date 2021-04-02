#include <gal_args_parser.hpp>

namespace gal::image2ascii::exec {
	Parser::Parser() : options("galImage2Ascii", "Convert A image to Ascii-Format") {
		auto adder = options.add_options("CLI args");
		adder("u,usage", "Print usage");
		adder("w,width", "use [-w value] or [--width value] to specify output width", cxxopts::value<Image::size_type>()->default_value("100"));
		adder("h,height", "use [-h value] or [--height value] to specify output height", cxxopts::value<Image::size_type>()->default_value("100"));
		adder("t,threshold", "use [-t value] or [--threshold value] to specify the threshold", cxxopts::value<float>()->default_value("0.f"));
		adder("i,invert", "add [-i] or [--invert] to set invert", cxxopts::value<bool>()->default_value("false"));
		// todo: is not set default value, it will raise a bad_cast exception
		adder("p,path", "use [-p detail_path] or [--path detail_path] to specify the input path", cxxopts::value<std::string>()->default_value(""));
		adder("o,output", "use [-o detail_path] or [--output detail_path] to specify the output path", cxxopts::value<std::string>()->default_value(""));
	}

	Parser::parse_state Parser::setup(int argc, const char *const *argv, Image *image) {
		try {
			auto result = options.parse(argc, argv);
			if (result.count("usage") || result.arguments().empty() || !result.count("path")) {
				std::cout << options.help() << std::endl;
				return parse_state::ASK_HELP;
			}

			image->width = result["width"].as<Image::size_type>();
			image->height = result["height"].as<Image::size_type>();
			image->threshold = result["threshold"].as<float>();
			image->invert = result["invert"].as<bool>();
			image->filepath = result["path"].as<std::string>();
			image->output_path = result["output"].as<std::string>();
		} catch (cxxopts::missing_argument_exception &what) {
			std::cout << "Missing argument: " << what.what() << '\n'
					  << options.help() << std::endl;
			return parse_state::INVALID_ARGUMENT;
		} catch (cxxopts::OptionParseException &what) {
			std::cout << "Invalid argument: " << what.what() << '\n'
					  << options.help() << std::endl;
			return parse_state::INVALID_ARGUMENT;
		} catch (std::bad_cast &what) {
			std::cout << "Bad argument format: " << what.what() << '\n'
					  << options.help() << std::endl;
			return parse_state::INVALID_ARGUMENT;
		} catch (...) {
			std::cout << "Unknown Error!" << '\n'
					  << options.help() << std::endl;
			return parse_state::INVALID_ARGUMENT;
		}

		return parse_state::SUCCESS;
	}

	void Parser::print_help() {
		std::cout << options.help() << std::endl;
	}

}// namespace gal::image2ascii::exec
