#include "Bureaucrat.hpp"

/* Constructor */

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
    _name = src.getName();
    _grade = src.getGrade();
    return ;
}

Bureaucrat &    Bureaucrat::operator=(Bureaucrat const & src) {
    _name = src.getName();
    _grade = src.getGrade();
    return (*this);
}

/* Destructor */

Bureaucrat::~Bureaucrat(void) {
    return ;
}

/* Members */

std::string Bureaucrat::getName(void) const {
    return (_name);
}

int Bureaucrat::getGrade(void) const {
    return (_grade);
}