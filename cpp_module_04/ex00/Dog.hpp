#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"

class Dog : public Animal {

public:
    Dog(void);
    Dog(Dog const & src);
    ~Dog();

    Dog &   operator=(Dog const & src);
    void    makeSound(void) const;
};

#endif