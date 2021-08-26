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
    std::cout << "Dog class has been created." << std::endl;

    _type = src._type;
    _brain = new Brain(*src._brain);
    _brain->printIdeas();

    return ;
}

Dog & Dog::operator=(Dog const & src) {
    std::cout << "Dog class has been created." << std::endl;

    _type = src._type;
    _brain = new Brain(*src._brain);
    _brain->printIdeas();

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