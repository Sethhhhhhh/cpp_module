#include "Ice.hpp"

Ice::Ice(void) {
    _type = "ice";
    return ;
}

Ice::Ice(Ice const & src) {
    *this = src;
    return ;
}

Ice &  Ice::operator=(Ice const & src) {
    return (*this);
}

AMateria *  Ice::clone() const {
    AMateria *  ice = new Ice();
    return (ice);
}