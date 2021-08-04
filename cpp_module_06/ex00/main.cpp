#include <iostream>
#include "Conversion.hpp"

int     main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Usage: ./scalar <string>" << std::endl;
		return (1);
	}

	Conversion  conv(av[1]);


	std::cout << "char: " << static_cast<char>(conv) << std::endl;
	std::cout << "int: " << static_cast<int>(conv) << std::endl;
	std::cout << "float: " << static_cast<float>(conv) << std::endl;
	std::cout << "double: " << static_cast<double>(conv) << std::endl;

	return (0);
}