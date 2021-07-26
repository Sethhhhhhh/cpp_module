#include "Ice.hpp"

Ice::Ice(void) {
    _type = "ice";
    return ;
}

Ice::Ice(Ice const & src) {
    _type = src._type;
    return ;
}

Ice &  Ice::operator=(Ice const & src) {
    _type = src._type;
    
	return (*this);
}

AMateria *  Ice::clone() const {
    AMateria *  ice = new Ice();
    return (ice);
}

void	Ice::use(ICharacter & target) {
	std::cout << "*shoots an ice bolt at " << target.getName() << "*" << std::endl;
	return ;
}
