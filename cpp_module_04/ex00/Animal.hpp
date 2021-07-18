#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <string>
#include <iostream>

class Animal {

protected:
    std::string _type;
    std::string _sound;

public:
    Animal(void);
    Animal(Animal const & src);
    ~Animal();

    Animal & operator=(Animal const & src);
    void    makeSound(void) const;
    std::string getType(void) const;
};

#endif