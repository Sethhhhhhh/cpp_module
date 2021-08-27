#include "Intern.hpp"

Intern::Intern(void) {
	_funcNames[0] = "shrubbery creation";
	_funcNames[1] = "robotomy request";
	_funcNames[2] = "presidential pardon";

	return ;
}

Intern::Intern(const Intern & src) {
	(void)src;
	return ;
}

Intern::~Intern(void) {
	return ;
}

Intern &    Intern::operator=(const Intern & src) {
	(void)src;
	return (*this);
}

Form *  Intern::makeForm(std::string name, std::string target) {
	Form *  form;
	Form *      (Intern::*f[3])(std::string) = {
			&Intern::_makeShrubberyCreation,
			&Intern::_makeRobotomyRequest,
			&Intern::_makePresidentialPardon
	};

	for (unsigned int i = 0; i < 3; i++) {
		if (!_funcNames[i].compare(name)) {
			form = (this->*(f[i]))(target);
			std::cout << "Intern creates" << form->getName() << "." << std::endl;
			return (form);
		}
	}
	std::cerr << "The name of your form is not correct !" << std::endl;
	return NULL;
}

Form *  Intern::_makeShrubberyCreation(std::string target) {
	return (new ShrubberyCreationForm(target));
}

Form *  Intern::_makeRobotomyRequest(std::string target) {
	return (new RobotomyRequestForm(target));
}

Form *  Intern::_makePresidentialPardon(std::string target) {
	return (new PresidentialPardonForm(target));
}