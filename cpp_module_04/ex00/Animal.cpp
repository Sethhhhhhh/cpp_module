#include "Animal.hpp"

/* Constructor functions */

Animal::Animal(void) : _type("Animal"), _sound("...") {
    return ;
}

Animal::Animal(Animal const & src) {
    return ;
}

Animal & Animal::operator=(Animal const & src) {
    return *this;
}

/* Destructor function */

Animal::~Animal(void) {
    return ;
}

/* Member function(s) */

void    Animal::makeSound(void) const {
    std::cout << _sound << std::endl;
}

std::string Animal::getType(void) const {
    return (_type);
}