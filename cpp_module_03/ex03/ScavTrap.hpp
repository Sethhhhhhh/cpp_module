#ifndef __SCAV_TRAP_HPP__
#define __SCAV_TRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &);
		~ScavTrap();

		ScavTrap &	operator=(ScavTrap const & src);

		void			guardGate(void) const;
		unsigned int	attack(std::string const & target);
};

#endif