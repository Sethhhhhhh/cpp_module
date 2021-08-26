#include "Cat.hpp"

/* Constructor functions */

Cat::Cat(void) {
    _brain = new Brain();
    _type = "Cat";
    std::cout << "Cat class has been created." << std::endl;

    _brain->printIdeas();
    return ;
}

Cat::Cat(Cat const & src) {
    std::cout << "Cat class has been created." << std::endl;

    _type = src._type;
    _brain = new Brain(*src._brain);
    _brain->printIdeas();

    return ;
}

Cat & Cat::operator=(Cat const & src) {
    std::cout << "Cat class has been created." << std::endl;

    _type = src._type;
    _brain = new Brain(*src._brain);
    _brain->printIdeas();

    return (*this);
}

/* Destructor function */

Cat::~Cat(void) {
    std::cout << "Cat class has been delete." << std::endl;
    delete _brain;

    return ;
}

void    Cat::makeSound(void) const {
    std::cout << "miaouuuu" << std::endl;
}

Brain & Cat::getBrain(void) const {
    return (*_brain);
}