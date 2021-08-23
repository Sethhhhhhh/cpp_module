#include "DiamondTrap.hpp"

/* Constructor function(s) */

DiamondTrap::DiamondTrap(void) {
	std::cout << "[DEFAULT] constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name) {
	ClapTrap::_name = name + "_clap_name";
	_energy_points = 50;
	_hit_points = 100;
	_attack_damage = 30;

	std::cout << "[NAME] DiamondTrap " << _name << " spawn." << std::endl;

	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) {
	_energy_points = src._energy_points;
	_hit_points = src._hit_points;
	_attack_damage = src._attack_damage;

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

void	DiamondTrap::attack(std::string const & target) {
	std::cout << _name << ": This is DiamondTrap attack!" << std::endl;
	ScavTrap::attack(target);

	return ;
}

void	DiamondTrap::whoAmI(void) const {
	std::cout << "My name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << "." << std::endl;
}