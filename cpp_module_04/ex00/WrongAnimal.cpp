#include "WrongAnimal.hpp"

/* Constructor functions */

WrongAnimal::WrongAnimal(void) : _type("Wrong animal") {
    std::cout << "WrongAnimal class has been created." << std::endl;

    return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {
    _type = src._type;

    return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src) {
    _type = src._type;

    return (*this);
}

/* Destructor function */

WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal class has been delete." << std::endl;

    return ;
}

/* Member function(s) */

void    WrongAnimal::makeSound(void) const {
    std::cout << "..." << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return (_type);
}