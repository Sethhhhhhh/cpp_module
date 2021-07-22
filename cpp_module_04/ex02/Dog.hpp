#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public AAnimal {

private:
	Brain*	_brain;

protected:
	std::string type;

public:
	Dog(void);
	Dog(Dog const & src);
	~Dog(void);

	Dog &			operator=(Dog const & src);
	Brain &			getBrain(void) const;
	virtual void	makeSound(void) const;
};

#endif