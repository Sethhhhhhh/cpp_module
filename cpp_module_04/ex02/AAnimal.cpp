#include "AAnimal.hpp"

/* Constructor functions */

AAnimal::AAnimal(void) : _type("AAnimal") {
    std::cout << "AAnimal class has been created." << std::endl;

    return ;
}

AAnimal::AAnimal(AAnimal const & src) {
    _type = src._type;

    return ;
}

AAnimal & AAnimal::operator=(AAnimal const & src) {
    _type = src._type;

    return (*this);
}

/* Destructor function */

AAnimal::~AAnimal(void) {
    std::cout << "AAnimal class has been delete." << std::endl;

    return ;
}

/* Member function(s) */

void    AAnimal::makeSound(void) const {
    std::cout << "..." << std::endl;
}

std::string AAnimal::getType(void) const {
    return (_type);
}