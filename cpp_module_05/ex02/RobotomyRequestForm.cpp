#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45) {
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
	std::cout << executor.getName() << " execute the action of " << getName() << "." << std::endl;
	return ;
}