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
	std::ofstream   f(getTarget() + "_shrubbery");

	Form::execute(executor);

	if (!f.is_open()) {
		std::cout << "Cannot open the file." << std::endl;
		return ;
	}
	f << "      /\\             \n"
		 "     /\\*\\           \n"
		 "    /\\O\\*\\         \n"
		 "   /*/\\/\\/\\        \n"
		 "  /\\O\\/\\*\\/\\     \n"
		 " /\\*\\/\\*\\/\\/\\   \n"
		 "/\\O\\/\\/*/\\/O/\\   \n"
		 "      ||              \n"
		 "      ||              \n"
		 "      ||              \n";

	f.close();
	return ;
}