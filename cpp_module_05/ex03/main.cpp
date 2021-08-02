#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {

	Bureaucrat  bob("bob", 1);

	Intern      samy;

	Form *  a = samy.makeForm("presidential pardon", "target");

	/* Execute the action of form class. */
	try {
		bob.signForm(*a);
		bob.executeForm(*a);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

    return (0);
}