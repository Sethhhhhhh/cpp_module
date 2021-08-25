#ifndef __WRONG_ANIMAL_HPP__
#define __WRONG_ANIMAL_HPP__

#include <string>
#include <iostream>

class WrongAnimal {

protected:
    std::string _type;

public:
    WrongAnimal(void);
    WrongAnimal(WrongAnimal const & src);
    ~WrongAnimal();

    WrongAnimal &   operator=(WrongAnimal const & src);
    std::string     getType(void) const;
    void            makeSound(void) const;
};

#endif