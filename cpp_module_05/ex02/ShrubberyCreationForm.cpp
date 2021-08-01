#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreation", 145, 137) {
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & src) {
	Form::operator=(src);
	return (*this);
}