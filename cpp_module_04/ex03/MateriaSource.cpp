#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (unsigned int i = 0; i < 4; i++) {
		_stock[i] = NULL;
	}
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	for (unsigned int i = 0; i < 4; i++) {
		if (src._stock[i] != NULL)
			_stock[i] = src._stock[i]->clone();
		else
			_stock[i] = NULL;
	}
	return ;
}

MateriaSource &  MateriaSource::operator=(MateriaSource const & src) {
	for (unsigned int i = 0; i < 4; i++) {
		if (src._stock[i] != NULL)
			_stock[i] = src._stock[i]->clone();
		else if (_stock[i]) {
			delete _stock[i];
			_stock[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++) {
		if (_stock[i] != NULL)
			delete _stock[i];
	}

	return ;
}

void	MateriaSource::learnMateria(AMateria *m) {
	if (m == NULL) {
		std::cout << "This AMateria is invalid ! " << std::endl;
		return ;
	}
	for (unsigned int i = 0; i < 4; i++) {
		if (_stock[i] == NULL) {
			_stock[i] = m;
			break;
		}
	}
	std::cout << m->getType() << " has been learned." << std::endl;
	return ;
}

AMateria *	MateriaSource::createMateria(std::string const & type) {
	if (type != "cure" && type != "ice")
		return NULL;
	for (unsigned int i = 0; i < 4; i++) {
		if (_stock[i] != NULL && !_stock[i]->getType().compare(type)) {
			std::cout << _stock[i]->getType() << " has been created." << std::endl;
			return (_stock[i]->clone());
		}
	}
	return NULL;
}

