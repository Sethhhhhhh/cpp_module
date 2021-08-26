#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>

class Animal {

protected:
    std::string _type;

public:
    Animal(void);
    Animal(Animal const & src);
    virtual ~Animal(void);

    Animal &        operator=(Animal const & src);
    std::string     getType(void) const;
    virtual void    makeSound(void) const;
};

#endif