#include "Dog.hpp"

/* Constructor functions */

Dog::Dog(void) {
    _type = "Dog";
    std::cout << "Dog class has been created." << std::endl;

    return ;
}

Dog::Dog(Dog const & src) {
    _type = src._type;

    return ;
}

Dog & Dog::operator=(Dog const & src) {
    _type = src._type;

    return (*this);
}

/* Destructor function */

Dog::~Dog(void) {
    std::cout << "Dog class has been delete." << std::endl;

    return ;
}

void    Dog::makeSound(void) const {
    std::cout << "woof woof" << std::endl;
}