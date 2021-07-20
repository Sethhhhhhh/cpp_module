#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public Animal {

private:
	Brain*	_brain;

protected:
	std::string type;

public:
	Cat(void);
	Cat(Cat const & src);
	~Cat();

	Cat & operator=(Cat const & src);

};

#endif