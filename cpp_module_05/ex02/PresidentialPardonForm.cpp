#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5) {
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
	std::cout << executor.getName() << " execute the action of " << getName() << "." << std::endl;
	return ;
}