#ifndef __DIAMOND_TRAP_HPP__
#define __DIAMOND_TRAP_HPP__

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

private:
	std::string	_name;

public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &);
	~DiamondTrap();

	DiamondTrap &	operator=(const DiamondTrap & src);
	void			attack(const std::string & target);
	void			whoAmI(void) const;
};

#endif