#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <string>
#include <iostream>

class Zombie {

	public:
		Zombie(std::string name);
		~Zombie(void);
		void    announce(void);

	private:
		std::string _name;
		std::string	_getName(void) const;

};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif