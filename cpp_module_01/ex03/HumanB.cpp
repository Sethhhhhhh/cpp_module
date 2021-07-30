#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	return ;
}

HumanB::~HumanB(void) {
	return ;
}

void	HumanB::attack(void) const {
	std::cout << _name << " attack with his " << (*_weapon).getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
	return ;
}