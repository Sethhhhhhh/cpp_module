#ifndef __AANIMAL_HPP__
#define __AANIMAL_HPP__

#include <iostream>

class AAnimal {

protected:
    std::string _type;

public:
    AAnimal(void);
    AAnimal(AAnimal const & src);
    virtual ~AAnimal(void);

    AAnimal &        operator=(AAnimal const & src);
    std::string     getType(void) const;
    virtual void    makeSound(void) const = 0;
};

#endif