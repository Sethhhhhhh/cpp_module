#include "FragTrap.hpp"

/* Constructor function(s) */

FragTrap::FragTrap(void) {
	std::cout << "[DEFAULT] constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) {
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	
	std::cout << "[NAME] FragTrap " << _name << " spawn." << std::endl;
	
	return ;
}

FragTrap::FragTrap(FragTrap const & src) {
	*this = src;
	
	std::cout << "[ASSIGNATION] FragTrap " << _name << " spawn." << std::endl;
	
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & src) {
	_name = src._name;
	_hit_points = src._hit_points;
	_attack_damage = src._attack_damage;
	_energy_points = src._energy_points;

	std::cout << "[COPY] FragTrap " << _name << " spawn." << std::endl;
	
	return *this;
}

/* Destructor function */

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << _name << " is dead." << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void) const {
	std::cout << _name << " high fives!" << std::endl;
}