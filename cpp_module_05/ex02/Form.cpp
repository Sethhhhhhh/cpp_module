#include "Form.hpp"

Form::Form(void) {
	_target = "null";
	_name = "null";
	return ;
}

Form::Form(std::string target, std::string name, int gradeToSign, int gradeToExecute) {
	_name = name;
	_target = target;
	_signed = false;

	if (gradeToSign < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150)
		throw GradeTooLowException();
	_gradeToSign = gradeToSign;

	if (gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToExecute > 150)
		throw GradeTooLowException();
	_gradeToExecute = gradeToExecute;

	return ;
}

Form::Form(const Form & src) {
	_name = src._name;
	_signed = src._signed;
	_gradeToSign = src._gradeToSign;
	_gradeToExecute = src._gradeToExecute;
	_target = src._target;

	return ;
}

Form &  Form::operator=(const Form & src) {
	_name = src._name;
	_signed = src._signed;
	_gradeToSign = src._gradeToSign;
	_gradeToExecute = src._gradeToExecute;
	_target = src._target;

	return (*this);
}

Form::~Form() {
	return ;
}

std::string Form::getName(void) const {
	return (_name);
}

int Form::getGradeToSign(void) const {
	return (_gradeToSign);
}

int Form::getGradeToExecute(void) const {
	return (_gradeToExecute);
}

bool    Form::getSign(void) const {
	return (_signed);
}

void	Form::beSigned(const Bureaucrat & src) {
	if (_gradeToSign > src.getGrade())
		_signed = true;
	else
		throw GradeTooLowException();
}

std::string Form::getTarget() const {
	return (_target);
}

std::ostream &  operator<<(std::ostream & o, const Form & src) {
	o << "name: " << src.getName()
	    << " signed: " << src.getSign()
		<< " grade to sign: " << src.getGradeToSign()
		<< " grade to execute: " << src.getGradeToExecute();

	return (o);
}

void Form::execute(const Bureaucrat & executor) const {
	if (!_signed)
		throw UnsignedForm();
	else if (executor.getGrade() > _gradeToSign)
		throw GradeTooLowException();

	return ;
}