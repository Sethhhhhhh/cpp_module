#include "Cat.hpp"

/* Constructor functions */

Cat::Cat(void) {
    std::cout << "[DEFAULT] Hello sir!" << std::endl;
    
    _type = "Cat";
    _sound = "miaou.";

    _brain = new Brain();
    for (unsigned int i = 0; i < 100; i++) {
        _brain->setIdea(i, "Idea #" + std::to_string(i));
    }
    return ;
}

Cat::Cat(Cat const & src) {
    std::cout << "[ASSIGNATION] Hello sir!" << std::endl;
    
    _type = src._type;
    _sound = src._sound;
    _brain = new Brain(*src._brain);

    return ;
}

Cat & Cat::operator=(Cat const & src) {
    std::cout << "[COPY] Hello sir!" << std::endl;

    _type = src._type;
    _sound = src._sound;
    _brain = new Brain(*src._brain);

    return *this;
}

/* Destructor function */

Cat::~Cat(void) {
    std::cout << "I die." << std::endl;
    delete _brain;
    return ;
}

/* Member function(s) */

Brain &   Cat::getBrain(void) const {
    return (*_brain);
}

void    Cat::makeSound(void) const {
    std::cout << _sound << std::endl;
}