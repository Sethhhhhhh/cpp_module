#include "Animal.hpp"

/* Constructor functions */

Animal::Animal(void) : _type("Animal") {
    std::cout << "Animal class has been created." << std::endl;

    return ;
}

Animal::Animal(Animal const & src) {
    _type = src._type;

    return ;
}

Animal & Animal::operator=(Animal const & src) {
    _type = src._type;

    return (*this);
}

/* Destructor function */

Animal::~Animal(void) {
    std::cout << "Animal class has been delete." << std::endl;

    return ;
}

/* Member function(s) */

void    Animal::makeSound(void) const {
    std::cout << "..." << std::endl;
}

std::string Animal::getType(void) const {
    return (_type);
}