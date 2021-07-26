#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class Character : public ICharacter {

	private:
		std::string	_name;

		Character(void);
		

	public:
		Character(std::string name);
		Character(Character const &);
		~Character(void);

		Character & operator=(Character const &);


		std::string const &	getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter & target);
		void				speak(void) const;
};

#endif
