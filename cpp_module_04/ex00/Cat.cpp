#include "Cat.hpp"

/* Constructor functions */

Cat::Cat(void) {
    _type = "Cat";
    _sound = "miaou.";
    return ;
}

Cat::Cat(Cat const & src) {
    return ;
}

Cat & Cat::operator=(Cat const & src) {
    return *this;
}

/* Destructor function */

Cat::~Cat(void) {
    return ;
}