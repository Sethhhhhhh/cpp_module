#include "Cat.hpp"

/* Constructor functions */

Cat::Cat(void) {
    _type = "Cat";
    std::cout << "Cat class has been created." << std::endl;

    return ;
}

Cat::Cat(Cat const & src) {
    _type = src._type;

    return ;
}

Cat & Cat::operator=(Cat const & src) {
    return (*this);
}

/* Destructor function */

Cat::~Cat(void) {
    std::cout << "Cat class has been delete." << std::endl;

    return ;
}

void    Cat::makeSound(void) const {
    std::cout << "miaouuuu" << std::endl;
}