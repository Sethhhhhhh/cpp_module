#include "AMateria.hpp"

AMateria::AMateria(void) : _type("no type") {
    return ;
}

AMateria::AMateria(std::string const & type) : _type(type) {
    return ;
}

AMateria::AMateria(AMateria const & src) {
    *this = src;
    return ;
}

AMateria::~AMateria(void) {
	return ;
}

AMateria &  AMateria::operator=(AMateria const & src) {
    _type = src.getType();

    return (*this);
}

std::string const & AMateria::getType() const {
    return (_type);
}

void	AMateria::use(ICharacter & target) {
	std::cout << "Default: don't do anything to " << target.getName() << std::endl;

	return ;	
};
