#include "Dog.hpp"

/* Constructor functions */

Dog::Dog(void) {
    _type = "Dog";
    _sound = "woof woof.";
    return ;
}

Dog::Dog(Dog const & src) {
    return ;
}

Dog & Dog::operator=(Dog const & src) {
    return *this;
}

/* Destructor function */

Dog::~Dog(void) {
    return ;
}