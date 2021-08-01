#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {

	Bureaucrat              bob("bob", 26);

	ShrubberyCreationForm   a("target");
	ShrubberyCreationForm   b(a);
	ShrubberyCreationForm   c = b;
	RobotomyRequestForm     d("target");
	PresidentialPardonForm  e("target");

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;

	/* Execute the action of form class. */
	try {
		bob.signForm(e);
		e.execute(bob);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

    return (0);
}