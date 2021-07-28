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
	return ;
}

void	MateriaSource::learnMateria(AMateria *m) {
	for (unsigned int i = 0; i < 4; i++) {
		if (_stock[i] == nullptr) {
			_stock[i] = m;
			break;
		}
	}
	return ;
}

AMateria *	MateriaSource::createMateria(std::string const & type) {
	if (type != "cure" || type != "ice")
		return nullptr;
	for (unsigned int i = 0; i < 4; i++) {
		if (_stock[i] != nullptr && _stock[i]->getType().compare(type))
			return (_stock[i]->clone());
	}
	return nullptr;
}

