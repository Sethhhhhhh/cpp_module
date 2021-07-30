#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (unsigned int i = 0; i < 4; i++) {
		_stock[i] = nullptr;
	}
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	for (unsigned int i = 0; i < 4; i++) {
		if (src._stock[i] != nullptr)
			_stock[i] = src._stock[i]->clone();
		else
			_stock[i] = nullptr;
	}
	return ;
}

MateriaSource &  MateriaSource::operator=(MateriaSource const & src) {
	for (unsigned int i = 0; i < 4; i++) {
		if (src._stock[i] != nullptr)
			_stock[i] = src._stock[i]->clone();
		else
			_stock[i] = nullptr;
	}
	return (*this);
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++) {
		if (_stock[i] != nullptr)
			delete _stock[i];
	}

	return ;
}

void	MateriaSource::learnMateria(AMateria *m) {
	if (m == nullptr) {
		std::cout << "This AMateria is invalid ! " << std::endl;
		return ;
	}
	for (unsigned int i = 0; i < 4; i++) {
		if (_stock[i] == nullptr) {
			_stock[i] = m;
			break;
		}
	}
	return ;
}

AMateria *	MateriaSource::createMateria(std::string const & type) {
	if (type != "cure" && type != "ice")
		return nullptr;
	for (unsigned int i = 0; i < 4; i++) {
		if (_stock[i] != nullptr && !_stock[i]->getType().compare(type))
			return (_stock[i]->clone());
	}
	return nullptr;
}

