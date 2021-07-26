#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main(void) {

	ICharacter *	seth = new Character("seth");
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
	delete cure;
    
	return (0);
}
