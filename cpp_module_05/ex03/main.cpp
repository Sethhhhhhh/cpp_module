#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {

	Bureaucrat	bob("bob", 4);
	Bureaucrat	seth("seth", 150);
	Bureaucrat	deku("deku", 40);


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

	/* Execute the action of form class. */
	try {
		std::cout << std::endl << "---------- BOB SIGN FORM ----------" << std::endl;
		bob.signForm(*a);
		bob.signForm(*b);
		bob.signForm(*c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "--------- DEKU SIGN FORM ----------" << std::endl;
		deku.signForm(*a);
		deku.signForm(*b);
		deku.signForm(*c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "--------- SETH SIGN FORM ----------" << std::endl;
		seth.signForm(*a);
		seth.signForm(*b);
		seth.signForm(*c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {		
		std::cout << std::endl << "--------- BOB EXECUTE FORM --------" << std::endl;
		bob.executeForm(*a);
		bob.executeForm(*b);
		bob.executeForm(*c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {		
		std::cout << std::endl << "-------- DEKU EXECUTE FORM --------" << std::endl;
		deku.executeForm(*a);
		deku.executeForm(*b);
		deku.executeForm(*c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "-------- SETH EXECUTE FORM --------" << std::endl;
		seth.executeForm(*a);
		seth.executeForm(*b);
		seth.executeForm(*c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

    return (0);
}