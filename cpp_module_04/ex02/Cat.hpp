#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public AAnimal {

private:
	Brain*	_brain;

protected:
	std::string type;

public:
	Cat(void);
	Cat(Cat const & src);
	~Cat(void);

	Cat &			operator=(Cat const & src);
	Brain &			getBrain(void) const;
	virtual void	makeSound(void) const;
};

#endif