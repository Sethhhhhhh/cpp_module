#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {

	Bureaucrat  bob("bob", 1);

	Intern      samy;

	Form *  a = samy.makeForm("presidential pardon", "target");
	Form *  b = samy.makeForm("robotomy request", "target");
	Form *  c = samy.makeForm("shrubbery creation", "target");
//	Form *  d = samy.makeForm("lol", "target");
//
//	std::cout << d->getName() << std::endl;

	/* Execute the action of form class. */
	try {
		/* form[a] */
		bob.signForm(*a);
		bob.executeForm(*a);

		/* form[b] */
		bob.signForm(*b);
		bob.executeForm(*b);

		/* form[c] */
		bob.signForm(*c);
		bob.executeForm(*c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

    return (0);
}