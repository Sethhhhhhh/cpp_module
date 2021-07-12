#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <string>
#include <iostream>

class Zombie {

public:
	Zombie(void);
	~Zombie(void);
	void	setName(std::string name);
	void    announce(void);

private:
	std::string _name;
	std::string	_getName(void) const;

};

Zombie  *zombieHorde(int N, std::string name);

#endif