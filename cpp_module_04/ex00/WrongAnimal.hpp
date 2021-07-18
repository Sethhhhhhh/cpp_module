#ifndef __WRONG_ANIMAL_HPP__
#define __WRONG_ANIMAL_HPP__

#include <string>
#include <iostream>

class WrongAnimal {

protected:
    std::string _type;
    std::string _sound;

public:
    WrongAnimal(void);
    WrongAnimal(WrongAnimal const & src);
    ~WrongAnimal();

    WrongAnimal & operator=(WrongAnimal const & src);
    void    makeSound(void) const;
    std::string getType(void) const;
};

#endif