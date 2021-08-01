#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    private:
        std::string _name;
        std::string _target;
        bool        _signed;
        int         _gradeToSign;
        int         _gradeToExecute;

	protected:
		Form(void);

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
        Form(std::string, std::string, int, int);
        Form(const Form &);
        ~Form(void);

        Form &          operator=(const Form &);
        std::string     getName(void) const;
        int             getGradeToSign(void) const;
        int             getGradeToExecute(void) const;
        bool            getSign(void) const;
        void            beSigned(const Bureaucrat & src);
        std::string     getTarget(void) const ;

        /* abstract method */
        virtual void    execute(const Bureaucrat & executor) const = 0;
        // TODO: make action function.
};

std::ostream &  operator<<(std::ostream &, const Form &);

#endif