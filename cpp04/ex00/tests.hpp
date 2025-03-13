#pragma once

# define ASSERT(condition, message) \
	do { \
		if (!(condition)) { \
			std::cerr << "Assertion `" #condition "` failed in " << __FILE__ \
				<< " line " << __LINE__ << ": " << message << std::endl; \
			std::terminate(); \
		} else { \
			std::cout << "Assertion `" #condition "` succeeded in " << __FILE__ \
				<< " line " << __LINE__ << std::endl; \
		} \
		} while (false)
