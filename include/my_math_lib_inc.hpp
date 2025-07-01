#pragma once


#ifdef _WIN32
#	ifdef BUILD_MY_MATH_LIB_SHARED
#		define LIB_API __declspec(dllexport)
#	else
#		define LIB_API __declspec(dllimport)
#	endif
#else
#	define LIB_API __attribute((visibility("default")))
#endif // LIB_API

LIB_API double get_pi_constant();
LIB_API double get_cube(double x);
LIB_API double get_sum(double x, double y);
