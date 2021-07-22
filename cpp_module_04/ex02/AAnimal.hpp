#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <string>
#include <iostream>

class AAnimal {

protected:
    std::string _type;
    std::string _sound;

public:
    AAnimal(void);
	AAnimal(AAnimal const & src);
	~AAnimal(void);

	AAnimal &           operator=(AAnimal const & src);

    std::string         getType(void) const;
    virtual void        makeSound(void) const = 0;
};

#endif