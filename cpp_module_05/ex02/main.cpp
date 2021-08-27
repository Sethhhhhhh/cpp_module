#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {

	Bureaucrat              bob("bob", 20);
	Bureaucrat              seth("seth", 150);
	Bureaucrat              deku("deku", 80);

	ShrubberyCreationForm   a("target");
	ShrubberyCreationForm   b(a);
	ShrubberyCreationForm   c = b;
	RobotomyRequestForm     d("target");
	PresidentialPardonForm  e("target");

	std::cout << std::endl << "-------------- FORM ---------------" << std::endl;
	std::cout << "ShrubberyCreationForm a -> " << a << std::endl;
	std::cout << "ShrubberyCreationForm b -> " << b << std::endl;
	std::cout << "ShrubberyCreationForm c -> " << c << std::endl;
	std::cout << "RobotomyRequestForm d -> " << d << std::endl;
	std::cout << "PresidentialPardonForm -> " << e << std::endl;

	/* Execute the action of form class. */
	try {
		std::cout << std::endl << "---------- BOB SIGN FORM ----------" << std::endl;
		bob.signForm(e);
		bob.signForm(d);
		bob.signForm(c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "--------- DEKU SIGN FORM ----------" << std::endl;
		deku.signForm(e);
		deku.signForm(d);
		deku.signForm(c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "--------- SETH SIGN FORM ----------" << std::endl;
		seth.signForm(e);
		seth.signForm(d);
		seth.signForm(c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {		
		std::cout << std::endl << "--------- BOB EXECUTE FORM --------" << std::endl;
		bob.executeForm(e);
		bob.executeForm(d);
		bob.executeForm(c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {		
		std::cout << std::endl << "-------- DEKU EXECUTE FORM --------" << std::endl;
		deku.executeForm(e);
		deku.executeForm(d);
		deku.executeForm(c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "-------- SETH EXECUTE FORM --------" << std::endl;
		seth.executeForm(e);
		seth.executeForm(d);
		seth.executeForm(c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

    return (0);
}