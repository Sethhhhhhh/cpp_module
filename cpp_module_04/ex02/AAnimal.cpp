#include "AAnimal.hpp"

/* Constructor functions */

AAnimal::AAnimal(void) : _type("AAnimal"), _sound("...") {
    std::cout << "An animal has been created!" << std::endl;
    return ;
}

AAnimal::AAnimal(AAnimal const & src) {
    std::cout << "[ASSIGNATION] An animal has been created!" << std::endl;
    return ;
}

AAnimal & AAnimal::operator=(AAnimal const & src) {
    std::cout << "[COPY] An animal has been created!" << std::endl;
    return *this;
}

/* Destructor function */

AAnimal::~AAnimal(void) {
    std::cout << "An AAnimal died!" << std::endl;
    return ;
}

/* Member function(s) */

void    AAnimal::makeSound(void) const {
    std::cout << _sound << std::endl;
}

std::string AAnimal::getType(void) const {
    return (_type);
}
