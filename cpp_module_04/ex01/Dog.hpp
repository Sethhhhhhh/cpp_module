#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

private:
    Brain * _brain;

public:
    Dog(void);
    Dog(Dog const & src);
    ~Dog();

    Dog &   operator=(Dog const & src);
    void    makeSound(void) const;
    Brain & getBrain(void) const;
};

#endif