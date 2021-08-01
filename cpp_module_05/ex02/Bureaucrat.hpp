#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <string>
#include <exception>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {

    private:
        std::string _name;
        int         _grade;
        
        Bureaucrat(void) {};

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return ("The grade is too high !");
                } 
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return ("The grade is too low !");
                } 
        };

    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &);
        ~Bureaucrat(void);

        Bureaucrat &    operator=(const Bureaucrat &);
        int             getGrade(void) const;
        std::string     getName(void) const;
        void            increase(unsigned int amount);
        void            decrease(unsigned int amount);
        void            signForm(Form & src) const;

};

std::ostream &  operator<<(std::ostream &, const Bureaucrat &);

#endif