#include "Brain.hpp"
#include <iostream>

/* Constructor functions */

Brain::Brain(void) {
    return ;
}

Brain::Brain(Brain const & src) {
    for (unsigned int index = 0; index < 100; index++) {
        _ideas[index] = src.getIdea(index);
    }

    return ;
}

Brain & Brain::operator=(Brain const & src) {
    return (*this);
}

/* Destructor function */

Brain::~Brain(void) {
    return ;
}

/* Member function(s) */

void    Brain::setIdea(unsigned int index, std::string idea) {
    if (index < 0 || index >= 100)
        return ;
    _ideas[index] = idea;

    return ;
}

std::string Brain::getIdea(unsigned int index) const {
    if (index < 0 || index >= 100)
        return (_ideas[0]);
    return (_ideas[index]);
}