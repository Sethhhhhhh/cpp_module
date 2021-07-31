#include "Form.hpp"

Form::Form(void) {
    return ;
}

Form::Form(const Form & src) {
    (void)src;
    return ;
}

Form &  Form::operator=(const Form & src) {
    (void)src;
    return (*this);
}

Form::~Form() {
    return ;
}

std::ostream &  operator<<(std::ostream & o, const Form & src) {
    (void)src;
    o << "yes!";

    return (o);
}