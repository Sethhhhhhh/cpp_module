#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {
    return ;
}

HumanA::~HumanA(void) {
    return ;
}

void	HumanA::attack(void) const {
	std::cout << _name << "attack with his " << _weapon.getType() << std::endl;
	return ;
}