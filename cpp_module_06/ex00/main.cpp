#include <iostream>
#include "Conversion.hpp"

int     main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Usage: ./convert <value>" << std::endl;
		return (1);
	}

	Conversion  conv(av[1]);

	std::cout.precision(1);
	std::cout << "char: '" << static_cast<char>(conv) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(conv) << std::endl;
	std::cout << std::fixed << "float: " << static_cast<float>(conv) << "f" << std::endl;
	std::cout << std::fixed << "double: " << static_cast<double>(conv) << std::endl;

	return (0);
}