#include "Character.hpp"

Character::Character(std::string name) : _name(name) {
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
	return ;
}

void	Character::unequip(int idx) {
	return ;
}

void	Character::use(int idx, ICharacter & target)
{
	return ;
}


void	Character::speak(void) const {
	std::cout << "Hi, my name is " << _name << std::endl;
	
	return ;
}
