#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <string>

class Bureaucrat {

    private:
        std::string _name;
        int         _grade;
        
        Bureaucrat(void) {};

    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &);
        ~Bureaucrat(void);

        Bureaucrat & operator=(Bureaucrat const &);
        int getGrade(void) const;
        std::string getName(void) const;
};

#endif