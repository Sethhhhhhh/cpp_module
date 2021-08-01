#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, "ShrubberyCreationForm", 145, 137) {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src) : Form(src) {
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & src) {
	Form::operator=(src);

	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const {
	Form::execute(executor);
	std::cout << "ShrubberyCreationForm" << std::endl;

	return ;
}