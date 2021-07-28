#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    return ;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	return ;
}

MateriaSource &  MateriaSource::operator=(MateriaSource const & src) {
	return (*this);
}

MateriaSource::~MateriaSource(void) {
	return ;
}

void	MateriaSource::learnMateria(AMateria *m) {
	return ;
}

AMateria *	MateriaSource::createMateria(std::string const & type) {
	return (nullptr);
}

