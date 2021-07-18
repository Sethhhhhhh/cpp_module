#include "WrongCat.hpp"

/* Constructor functions */

WrongCat::WrongCat(void) {
    _type = "Wrong Cat";
    return ;
}

WrongCat::WrongCat(WrongCat const & src) {
    return ;
}

WrongCat & WrongCat::operator=(WrongCat const & src) {
    return *this;
}

/* Destructor function */

WrongCat::~WrongCat(void) {
    return ;
}