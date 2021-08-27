#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, "RobotomyRequestForm", 72, 45) {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src) : Form(src) {
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & src) {
	Form::operator=(src);

	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat & executor) const {
	Form::execute(executor);

	std::cout << "bruit de perceuse..." << std::endl;
	std::srand(std::time(NULL));
	if (std::rand() % 2)
		std::cout << getTarget() << " a bien été robotomizée." << std::endl;
	else
		std::cout << getTarget() << " n'a pas été robotomizée." << std::endl;

	return ;
}