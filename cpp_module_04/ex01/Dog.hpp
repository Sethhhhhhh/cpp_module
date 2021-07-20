#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public Animal {

private:
	Brain*	_brain;

protected:
	std::string type;

public:
	Dog(void);
	Dog(Dog const & src);
	~Dog();

	Dog & operator=(Dog const & src);
};

#endif