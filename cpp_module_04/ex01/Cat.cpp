#include "Cat.hpp"

/* Constructor functions */

Cat::Cat(void) {
    _type = "Cat";
    _sound = "miaou.";

    _brain = new Brain();

    for (unsigned int i = 0; i < 100; i++) {
        _brain->setIdea(i, "idea #" + i);
    }
    return ;
}

Cat::Cat(Cat const & src) {
    _type = src._type;
    _sound = src._sound;
    _brain = new Brain();
    *_brain = *(src._brain);
    return ;
}

Cat & Cat::operator=(Cat const & src) {
    _type = src._type;
    _sound = src._sound;
    _brain = new Brain();
    *_brain = *(src._brain);
    return *this;
}

/* Destructor function */

Cat::~Cat(void) {
    delete _brain;
    return ;
}

/* Member function(s) */

Brain &   Cat::getBrain(void) const {
    return (*_brain);
}