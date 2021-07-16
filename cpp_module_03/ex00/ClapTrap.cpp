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
	return *this;
}

/* Destructor function */

ClapTrap::~ClapTrap(void) {
    return ;
}

void    ClapTrap::attack(std::string const & target) {
    if (_energy_points == 0)
        return ;
    else
        _energy_points -= 1;

    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!";
    return ;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (_hit_points < amount)
        return ;
    _hit_points -= amount;

    std::cout << "ClapTrap " << _name << " take damage, causing " << amount << " points of damage!";
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (_hit_points == 10)
        return ;
    else if (_hit_points + amount > 10)
        _hit_points = 10;
    else
        _hit_points += amount;

    std::cout << "ClapTrap " << _name << "be repaired!";
    return ;
}
