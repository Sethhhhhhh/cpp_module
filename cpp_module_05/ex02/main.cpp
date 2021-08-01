#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {

	Bureaucrat              bob = Bureaucrat("bob", 100);

	// TODO: Delete extra class.
	ShrubberyCreationForm   a = ShrubberyCreationForm();
	ShrubberyCreationForm   b = ShrubberyCreationForm(a);
	ShrubberyCreationForm   c = b;
	RobotomyRequestForm     d = RobotomyRequestForm();
	PresidentialPardonForm  e = PresidentialPardonForm();

	std::cout << d << std::endl;

	std::cout << e << std::endl;

	/* Try if the constructor(s) works perfectly. */
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	/* Execute the action of form class. */
	c.execute(bob);

    return (0);
}