#include "Cure.hpp"

Cure::Cure(void) {
    _type = "cure";
    return ;
}

Cure::~Cure(void) {
    return ;
}

Cure &  Cure::operator=(Cure const & src) {
    _type = src._type;
    
	return (*this);
}

AMateria *  Cure::clone() const {
    AMateria *  cure = new Cure();
    return (cure);
}

void	Cure::use(ICharacter & target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
