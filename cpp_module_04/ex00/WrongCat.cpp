#include "WrongCat.hpp"

/* Constructor functions */

WrongCat::WrongCat(void) {
    _type = "Wrong Cat";
    std::cout << "WrongCat class has been created." << std::endl;

    return ;
}

WrongCat::WrongCat(WrongCat const & src) {
    _type = src._type;

    return ;
}

WrongCat & WrongCat::operator=(WrongCat const & src) {
    _type = src._type;

    return (*this);
}

/* Destructor function */

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat class has been delete." << std::endl;

    return ;
}

void    WrongCat::makeSound(void) const {
    std::cout << "miaouuuu" << std::endl;
}