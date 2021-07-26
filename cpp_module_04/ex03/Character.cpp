#include "Character.hpp"

Character::Character(void) : _name("no_name"), _index(0) {
	return ;
}

Character::Character(std::string name) : _name(name),  _index(0) {
	std::cout << "I'm alive !" << std::endl;
	
	return ;
}

Character::Character(Character const & src) {
	std::cout << "I'm alive and I'm genetically altered !" << std::endl;
	
	_name = src.getName();
	
	return ;
}

Character::~Character(void) {
	std::cout << "Oh shit I'm dying !" << std::endl;
	
	return ;
}

std::string const & Character::getName(void) const {
	return (_name);
}

void	Character::equip(AMateria *m) {
	if (_index >= 3) {
		std::cout << "You can't take more than 4 AMateria !" << std::endl;;
		return ;
	}
	_stock[_index] = m;
	_index += 1;
	
	return ;
}

void	Character::unequip(int idx) {
	if (_index < 0 || _index > 3) {
		std::cout << "The AMateria you want to unequip does not exist !" << std::endl;
		return ;
	}

	for (unsigned int i = 0; i < 4; i++) {
		if (i > _index)
			_stock[i - 1] = _stock[i];
		else if (i == _index)
			_stock[i] = nullptr;
	}
	_index -= 1;	

	return ;
}

void	Character::use(int idx, ICharacter & target)
{
	if (_index < 0 || _index > 3) {
		std::cout << "The AMateria you want to unequip does not exist !" << std::endl;
		return ;
	}
	
	_stock[_index]->use(target);

	return ;
}

void	Character::speak(void) const {
	std::cout << "Hi, my name is " << _name << std::endl;
	
	return ;
}
