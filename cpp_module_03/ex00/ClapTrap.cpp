#include "ClapTrap.hpp"

/* Constructor function(s) */

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	*this = src;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src) {
	std::cout << "Assignation operator called" << std::endl;

	this->_hit_points = src._hit_points;
	this->_attack_damage = src._attack_damage;
	this->_energy_points = src._energy_points;
	
	return *this;
}

/* Destructor function */

ClapTrap::~ClapTrap(void) {
	return ;
}

/* Get and Set functions */

unsigned int	ClapTrap::getHealth(void) const {
	return (_hit_points);
}

unsigned int	ClapTrap::getEnergy(void) const {
	return (_energy_points);
}

unsigned int	ClapTrap::getAttackDamage(void) const {
	return (_attack_damage);
}

void	ClapTrap::setAttackDamage(unsigned int amount) {
	_attack_damage = amount;
	return ;
}

/* Usage functions */

unsigned int	ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	return (_attack_damage);
}

void    ClapTrap::takeDamage(unsigned int amount) {
	if (_hit_points < amount) {
		_hit_points = 0;
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
	}
	else {
		_hit_points -= amount;
		std::cout << "ClapTrap " << _name << " take damage, causing " << amount << " points of damage!" << std::endl;
	}
	return ;
}

void    ClapTrap::beRepaired(unsigned int amount) {
	if (_hit_points == 100) {
		std::cout << "ClapTrap " << _name << " hit points are already at their maximum!" << std::endl;
		return ;
	}
	else if ((_hit_points + amount) > 100)
		_hit_points = 100;
	else
		_hit_points += amount;

	std::cout << amount << "hp have been added to Claptrap " << _name << "!" << std::endl;
	return ;
}
