#ifndef __DIAMOND_TRAP_HPP__
#define __DIAMOND_TRAP_HPP__

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

protected:
	DiamondTrap(void);

public:
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &);
	~DiamondTrap();

	DiamondTrap &	operator=(DiamondTrap const & src);
};

#endif