#include "Character.hpp"

/*
**	Constructor(s)
*/

Character::Character(void) : _name("no_name"), _index(0) {
	for (unsigned int i = 0; i < 4; i++)
		_stock[i] = nullptr;

	return ;
}

Character::Character(std::string name) : _name(name),  _index(0) {
	for (unsigned int i = 0; i < 4; i++)
		_stock[i] = nullptr;

	std::cout << "I'm alive !" << std::endl;
	
	return ;
}

Character::Character(Character const & src) : _index(0) {
	_name = src.getName();
	for (unsigned int i = 0; i < 4; i++) {
		if (i < src._index)
			equip(src._stock[i]->clone());
		else
			_stock[i] = nullptr;
	}

	std::cout << "I'm alive and I'm genetically altered !" << std::endl;
	
	return ;
}

Character &	Character::operator=(Character const & src) {
	_name = src.getName();
	for (unsigned int i = 0; i < 4; i++) {
		if (i <= src._index)
			equip(src._stock[i]->clone());
		else
			_stock[i] = nullptr;
	}
	
	std::cout << "I'm alive and I'm a copy of an existing character !" << std::endl;
	
	return (*this);
}

/*
**	Destructor
*/

Character::~Character(void) {
	std::cout << "Oh shit I'm dying !" << std::endl;

	for (int i = 0; i < 4; i++) {
		if (_stock[i] != nullptr)
			delete _stock[i];
	}

	return ;
}

/*
**	Member function(s)
*/

std::string const & Character::getName(void) const {
	return (_name);
}

void	Character::equip(AMateria *m) {
	if (m == nullptr) {
		std::cout << "The AMateria is invalid !" << std::endl;
		return ;
	}
	if (_index >= 3) {
		std::cout << "You can't take more than 4 AMateria !" << std::endl;;
		return ;
	}
	_stock[_index] = m;
	_index += 1;
	std::cout << "New AMateria has been added to your stock." << std::endl;
	
	return ;
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3 || _stock[idx] == nullptr) {
		std::cout << "The AMateria you want to unequip does not exist !" << std::endl;
		return ;
	}

	for (int i = 0; i < 4; i++) {
		if (i > idx)
			_stock[i - 1] = _stock[i];
		else if (i == idx)
			_stock[i] = nullptr;
	}
	_index -= 1;	
	std::cout << "AMateria number " << idx << " has been removed to your stock." << std::endl;

	return ;
}

void	Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx > 3 || _stock[idx] == nullptr) {
		std::cout << "The AMateria you want to use does not exist !" << std::endl;
		return ;
	}

	_stock[idx]->use(target);

	return ;
}
