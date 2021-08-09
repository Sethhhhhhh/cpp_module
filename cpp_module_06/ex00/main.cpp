#include <iostream>
#include "Conversion.hpp"

int     main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Usage: ./convert <value>" << std::endl;
		return (1);
	}

	Conversion  conv(av[1]);

	std::cout.precision(1);

	/* Character */
	try {
		std::cout << "char: ";
		char c = static_cast<char>(conv);
		std::cout << c;
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	std::cout << std::endl;

	/* Integer */
	try {
		std::cout << "int: ";
		int i = static_cast<int>(conv);
		std::cout << i;
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	std::cout << std::endl;

	/* Float */
	try {
		std::cout << "float: ";
		float f = static_cast<float>(conv);
		std::cout << std::fixed << f << "f";
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	std::cout << std::endl;

	/* Double */
	try {
		std::cout << "double: ";
		double d = static_cast<double>(conv);
		std::cout << std::fixed << d;
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	std::cout << std::endl;

	return (0);
}