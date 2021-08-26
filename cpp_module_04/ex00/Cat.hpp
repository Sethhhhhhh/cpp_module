#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"

class Cat : public Animal {

public:
    Cat(void);
    Cat(Cat const & src);
    ~Cat();

    Cat &   operator=(Cat const & src);
    void    makeSound(void) const;
};

#endif