#include "Bureaucrat.hpp"

/* Constructor */

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
    return;
}

Bureaucrat::Bureaucrat(const Bureaucrat & src) {
    _name = src.getName();
    _grade = src.getGrade();
    return ;
}

Bureaucrat &    Bureaucrat::operator=(const Bureaucrat & src) {
    _name = src.getName();
    _grade = src.getGrade();
    return (*this);
}

/* Destructor */

Bureaucrat::~Bureaucrat(void) {
    return ;
}

/* Overload */

std::ostream &  operator<<(std::ostream & o, const Bureaucrat & src) {
    o << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
    return o;
}

/* Members */

std::string Bureaucrat::getName(void) const {
    return (_name);
}

int Bureaucrat::getGrade(void) const {
    return (_grade);
}

void    Bureaucrat::increase(unsigned int amount) {
    if (_grade - amount < 1)
        throw GradeTooHighException();

    _grade -= amount;
    return ;
}

void    Bureaucrat::decrease(unsigned int amount) {
    if (_grade + amount > 150)
        throw GradeTooLowException();

    _grade += amount;
    return ;
}

void    Bureaucrat::signForm(Form & src) const {
    /* Sign the form by self (this). */
    src.beSigned(*this);

    if (src.getSign()) {
        std::cout << _name << " signs " << src.getName() << "." << std::endl;
    }
    else
        std::cout << _name << " cannot sign because the grade of bureaucrat is too low." << std::endl;
    return ;
}