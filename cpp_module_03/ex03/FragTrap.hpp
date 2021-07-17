#ifndef __FRAG_TRAP_HPP__
#define __FRAG_TRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

protected:
	FragTrap(void);

public:
	FragTrap(std::string name);
	FragTrap(FragTrap const &);
	~FragTrap();

	FragTrap &	operator=(FragTrap const & src);

	void	highFivesGuys(void) const;
};

#endif