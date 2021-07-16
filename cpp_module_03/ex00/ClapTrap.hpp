#ifndef __CLAP_TRAP_HPP__
#define __CLAP_TRAP_HPP__

#include <iostream>
#include <string>

class ClapTrap {

private:
	std::string _name;
	int	_hit_points;
	int	_energy_points;
	int	_attack_damage;

public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &);
	~ClapTrap();

	ClapTrap &	operator=(ClapTrap const & src);

	void    takeDamage(unsigned int amount);
	void    beRepaired(unsigned int amount);
	void	setAttackDamage(unsigned int amount);
	unsigned int	attack(std::string const & target);
	unsigned int	getEnergy(void) const;
	unsigned int	getHealth(void) const;
	unsigned int	getAttackDamage(void) const;
};

#endif