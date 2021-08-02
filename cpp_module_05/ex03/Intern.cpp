#include "Intern.hpp"

Intern::Intern(void) {
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

	for (unsigned int i = 0; i < 3; i++) {
		if (!_funcNames[i].compare(name)) {
			form = (this->*(_f[i]))(target);
			std::cout << "Intern creates" << form->getName() << "." << std::endl;
			return (form);
		}
	}
	std::cerr << "The name of your form is not correct !" << std::endl;
	return nullptr;
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