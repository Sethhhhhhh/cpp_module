#include "DiamondTrap.hpp"

/* Constructor function(s) */

DiamondTrap::DiamondTrap(void) {
	std::cout << "[DEFAULT] constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) {
	_name = name;
	_energy_points = ScavTrap::_energy_points;
	_hit_points = FragTrap::_hit_points;
	_attack_damage = FragTrap::_attack_damage;

	std::cout << "[NAME] DiamondTrap " << _name << " spawn." << std::endl;
	
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) {
	*this = src;
	
	std::cout << "[ASSIGNATION] DiamondTrap " << _name << " spawn." << std::endl;
	
	return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & src) {
	_name = src._name;
	_hit_points = src._hit_points;
	_attack_damage = src._attack_damage;
	_energy_points = src._energy_points;

	std::cout << "[COPY] DiamondTrap " << _name << " spawn." << std::endl;
	
	return *this;
}

/* Destructor function */

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap " << _name << " is dead." << std::endl;
	return ;
}