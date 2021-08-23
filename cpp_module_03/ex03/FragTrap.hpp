#ifndef __FRAG_TRAP_HPP__
#define __FRAG_TRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &);
		~FragTrap();

		FragTrap &	operator=(FragTrap const & src);
		void		highFivesGuys(void) const;
		void		attack(const std::string & target);
};

#endif