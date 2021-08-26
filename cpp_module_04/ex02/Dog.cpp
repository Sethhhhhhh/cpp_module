#include "Dog.hpp"

/* Constructor functions */

Dog::Dog(void) {
    _brain = new Brain();
    _type = "Dog";
    std::cout << "Dog class has been created." << std::endl;

    _brain->printIdeas();
    return ;
}

Dog::Dog(Dog const & src) {
    _type = src._type;

    return ;
}

Dog & Dog::operator=(Dog const & src) {
    return (*this);
}

/* Destructor function */

Dog::~Dog(void) {
    std::cout << "Dog class has been delete." << std::endl;
    delete _brain;

    return ;
}

void    Dog::makeSound(void) const {
    std::cout << "woof woof" << std::endl;
}

Brain & Dog::getBrain(void) const {
    return (*_brain);
}