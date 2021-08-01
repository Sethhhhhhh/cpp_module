#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, "PresidentialPardonForm", 25, 5) {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src) : Form(src) {
	return ;
}


PresidentialPardonForm::~PresidentialPardonForm(void) {
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & src) {
	Form::operator=(src);

	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat & executor) const {
	Form::execute(executor);
	std::cout << getTarget() << " a été pardonnée par Zafod Beeblebrox." << std::endl;

	return ;
}