#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <iostream>

class Form {

    private:
        std::string _name;
        bool        _signed;
        int         _gradeToSign;
        int         _gradeToExecute;

        Form(void) {};

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
        Form(std::string name, int gradeToSign, int gradeToExecute);    
        Form(const Form &);
        ~Form(void);

        Form &  operator=(const Form &);
        std::string getName(void) const;
        int getGradeToSign(void) const;
        int getGradeToExecute(void) const;
        bool    isSign(void) const;

};

std::ostream &  operator<<(std::ostream &, const Form &);

#endif