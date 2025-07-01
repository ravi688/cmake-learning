#include "my_math_lib_inc.hpp"

LIB_API double get_pi_constant()
{
	return 3.1415926;
}

LIB_API double get_cube(double x)
{
	return x * x * x;
}

LIB_API double get_sum(double x, double y)
{
	return x + y;
}
