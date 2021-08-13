#include <iostream>
#include <string>

int main(void) {
	std::string		string = "HI THIS BRAIN";
	std::string *	stringPTR = &string;
	std::string &	stringREF = string;
	
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (0);
}