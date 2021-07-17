#ifndef __DIAMOND_TRAP_HPP__
#define __DIAMOND_TRAP_HPP__

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

private:
	std::string	_name;

protected:
	DiamondTrap(void);

public:
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &);
	~DiamondTrap();

	DiamondTrap &	operator=(DiamondTrap const & src);

	unsigned int	attack(std::string const & target);
	void			whoAmI(void) const;
};

#endif