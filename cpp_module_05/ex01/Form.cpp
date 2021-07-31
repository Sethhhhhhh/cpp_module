#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false) {
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

    return ;
}

Form &  Form::operator=(const Form & src) {
    _name = src._name;
    _signed = src._signed;
    _gradeToSign = src._gradeToSign;
    _gradeToExecute = src._gradeToExecute;

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

bool    Form::isSign(void) const {
    return (_signed);
}

std::ostream &  operator<<(std::ostream & o, const Form & src) {
    o << "name: " << src.getName()
        << " signed: " << src.isSign()
        << " grade to sign: " << src.getGradeToSign()
        << " grade to execute: " << src.getGradeToExecute();

    return (o);
}