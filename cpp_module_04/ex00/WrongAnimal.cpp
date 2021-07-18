#include "WrongAnimal.hpp"

/* Constructor functions */

WrongAnimal::WrongAnimal(void) : _type("Wrong animal"), _sound("...") {
    return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {
    return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src) {
    return *this;
}

/* Destructor function */

WrongAnimal::~WrongAnimal(void) {
    return ;
}

/* Member function(s) */

void    WrongAnimal::makeSound(void) const {
    std::cout << _sound << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return (_type);
}