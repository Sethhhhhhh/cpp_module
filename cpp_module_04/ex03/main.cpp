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
	seth->unequip(0);
	seth->unequip(0);

	delete seth;
	delete deku;

	delete ice;
	delete cure;
    
	return (0);
}
