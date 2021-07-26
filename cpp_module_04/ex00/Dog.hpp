#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include <string>

class Dog : public Animal {

protected:
    std::string type;

public:
    Dog(void);
    Dog(Dog const & src);
    ~Dog();

    Dog & operator=(Dog const & src);
};

#endif