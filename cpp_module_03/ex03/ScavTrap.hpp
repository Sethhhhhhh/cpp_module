#ifndef __SCAV_TRAP_HPP__
#define __SCAV_TRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

protected:
	ScavTrap(void);

public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &);
	~ScavTrap();

	ScavTrap &	operator=(ScavTrap const & src);

	void	guardGate(void) const;
};

#endif