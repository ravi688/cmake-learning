#include "my_math_lib_inc.hpp"
#include <iostream>

int main(int argc, const char** argv)
{
	std::cout << "--- my math lib --- " << std::endl;
	std::cout << "get_pi_constant: " << get_pi_constant() << std::endl;
	std::cout << "get_cube(3.0): " << get_cube(3.0) << std::endl;
	std::cout << "get_sum(3.0, 4.0): " << get_sum(3.0, 4.0) << std::endl;
	return 0;
}
