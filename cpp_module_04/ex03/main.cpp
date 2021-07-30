#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void) {

	IMateriaSource * src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter * me = new Character("me");

	AMateria * tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter * bob = new Character("bob");

	me->use(0, *bob);	
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

/*	ICharacter *	seth = new Character("seth");
	ICharacter *	deku = new Character("deku");

	AMateria *	ice = new Ice();
	AMateria *	cure = new Cure();

	seth->equip(ice);
	seth->equip(cure);
	seth->use(0, *deku);
	seth->use(1, *deku);

	ICharacter *	asta = new Character(*((Character *)seth));

	asta->use(0, *deku);
	asta->use(1, *deku);

	asta->unequip(0);

	asta->use(0, *deku);

	delete seth;
	delete deku;
	delete asta;

	delete ice;
	delete cure;*/
    
	return (0);
}
