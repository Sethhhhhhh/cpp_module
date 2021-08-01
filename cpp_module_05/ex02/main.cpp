#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {

	ShrubberyCreationForm   a = ShrubberyCreationForm();
	std::cout << a << std::endl;

	ShrubberyCreationForm   b = ShrubberyCreationForm(a);
	std::cout << b << std::endl;

	ShrubberyCreationForm   c = b;
	std::cout << c << std::endl;

    return (0);
}