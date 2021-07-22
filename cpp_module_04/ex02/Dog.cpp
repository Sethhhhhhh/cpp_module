#include "Dog.hpp"

/* Constructor functions */

Dog::Dog(void) {
    std::cout << "[DEFAULT] What's up guys ?" << std::endl;
    
    _type = "Dog";
    _sound = "woof woof.";

    _brain = new Brain();
    for (unsigned int i = 0; i < 100; i++) {
        _brain->setIdea(i, "Idea #" + std::to_string(i));
    }
    return ;
}

Dog::Dog(Dog const & src) {
    std::cout << "[ASSIGNATION] What's up guys ?" << std::endl;
    
    _type = src._type;
    _sound = src._sound;
    _brain = new Brain(*src._brain);

    return ;
}

Dog & Dog::operator=(Dog const & src) {
    std::cout << "[COPY] What's up guys ?" << std::endl;

    _type = src._type;
    _sound = src._sound;
    _brain = new Brain(*src._brain);

    return *this;
}

/* Destructor function */

Dog::~Dog(void) {
    std::cout << "Oh fuck I'm dying." << std::endl;
    delete _brain;
    return ;
}

/* Member function(s) */

Brain &   Dog::getBrain(void) const {
    return (*_brain);
}

void    Dog::makeSound(void) const {
    std::cout << _sound << std::endl;
}