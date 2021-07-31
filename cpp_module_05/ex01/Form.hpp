#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <iostream>

class Form {

    private:

    public:
        Form(void);
        Form(const Form &);
        ~Form(void);

        Form &  operator=(const Form &);
};

std::ostream &  operator<<(std::ostream &, const Form &);

#endif