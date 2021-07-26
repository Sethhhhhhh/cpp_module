#include "Cure.hpp"

Cure::Cure(void) {
    _type = "cure";
    return ;
}

Cure::Cure(Cure const & src) {
    *this = src;
    return ;
}

Cure &  Cure::operator=(Cure const & src) {
    return (*this);
}

AMateria *  Cure::clone() const {
    AMateria *  cure = new Cure();
    return (cure);
}

void	Cure::use(ICharacter & target) {
	std::cout << "*heals  " << target.getName() << " wounds*" << std::endl;
	return ;
}
