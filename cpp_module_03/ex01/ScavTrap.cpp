#include "ScavTrap.hpp"

/* Constructor function(s) */

ScavTrap::ScavTrap(void) {
	std::cout << "[DEFAULT] constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) {
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	
	std::cout << "[NAME] ScavTrap " << _name << " spawn." << std::endl;
	
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src) {
	_name = src._name;
	_hit_points = src._hit_points;
	_attack_damage = src._attack_damage;
	_energy_points = src._energy_points;
	
	std::cout << "[ASSIGNATION] ScavTrap " << _name << " spawn." << std::endl;
	
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src) {
	_name = src._name;
	_hit_points = src._hit_points;
	_attack_damage = src._attack_damage;
	_energy_points = src._energy_points;

	std::cout << "[COPY] ScavTrap " << _name << " spawn." << std::endl;
	
	return *this;
}

/* Destructor function */

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << _name << " is dead." << std::endl;
	return ;
}

void	ScavTrap::guardGate(void) const {
	std::cout << "ScavTrap has switched to doorkeeper mode !" << std::endl;
}