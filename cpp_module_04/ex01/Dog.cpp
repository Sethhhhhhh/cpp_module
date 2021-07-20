#include "Dog.hpp"

/* Constructor functions */

Dog::Dog(void) {
    _type = "Dog";
    _sound = "woof woof.";

    _brain = new Brain();
    return ;
}

Dog::Dog(Dog const & src) {
    _type = src._type;
    _sound = src._sound;
    _brain = new Brain();
    *_brain = *(src._brain);
    return ;
}

Dog & Dog::operator=(Dog const & src) {
    _type = src._type;
    _sound = src._sound;
    _brain = new Brain();
    *_brain = *(src._brain);
    return *this;
}

/* Destructor function */

Dog::~Dog(void) {
    delete _brain;
    return ;
}