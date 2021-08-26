#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

private:
    Brain * _brain;

public:
    Cat(void);
    Cat(Cat const & src);
    ~Cat();

    Cat &   operator=(Cat const & src);
    void    makeSound(void) const;
    Brain & getBrain(void) const;
};

#endif