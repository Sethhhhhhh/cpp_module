#include "Animal.hpp"

/* Constructor functions */

Animal::Animal(void) : _type("Animal"), _sound("...") {
    std::cout << "An animal has been created!" << std::endl;
    return ;
}

Animal::Animal(Animal const & src) {
    std::cout << "[ASSIGNATION] An animal has been created!" << std::endl;
    return ;
}

Animal & Animal::operator=(Animal const & src) {
    std::cout << "[COPY] An animal has been created!" << std::endl;
    return *this;
}

/* Destructor function */

Animal::~Animal(void) {
    std::cout << "An Animal died!" << std::endl;
    return ;
}

/* Member function(s) */

void    Animal::makeSound(void) const {
    std::cout << _sound << std::endl;
}

std::string Animal::getType(void) const {
    return (_type);
}
