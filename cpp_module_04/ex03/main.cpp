#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void) {

	std::cout << std::endl << "--- SUBJECT TEST ---" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;

	std::cout << std::endl << "------- CREATE CHARACTER -------" << std::endl;
    Character		seth("seth");
	Character		deku("deku");

	AMateria *		ice;
	AMateria *		cure;
	AMateria *		otherIce;
	AMateria *		otherCure;

	std::cout << std::endl << "------------ SOURCE ------------" << std::endl;
	MateriaSource	source;
	source.learnMateria(new Ice);
	source.learnMateria(new Cure);
	ice = source.createMateria("ice");
	otherCure = source.createMateria("cure");

	std::cout << std::endl << "---------- SOURCE COPY ---------" << std::endl;
	MateriaSource	otherSource(source);
	cure = otherSource.createMateria("cure");
	otherIce = otherSource.createMateria("ice");

	std::cout << std::endl << "-- USE WITHOUT EQUIP AMATERIA --" << std::endl;
	seth.use(0, deku);
	seth.use(1, deku);

	std::cout << std::endl << "---- EQUIP AMATERIA TO SETH ----" << std::endl;
	seth.equip(ice);
	seth.equip(cure);
	seth.equip(otherIce);
	seth.equip(otherCure);

	std::cout << std::endl << "--- USE AFTER EQUIP AMATERIA ---" << std::endl;
	seth.use(0, deku);
	seth.use(1, deku);
	seth.use(2, deku);
	seth.use(3, deku);

	std::cout << std::endl << "----- CREATE ASTA BY COPY ------" << std::endl;
	Character		asta(seth);

	std::cout << std::endl << "--- USE AMATERIA OF ASTA ---" << std::endl;
	asta.use(0, deku);
	asta.use(1, deku);

	std::cout << std::endl << "--- MORE THAN 4 AMATERIA ---" << std::endl;
	AMateria *		anotherCure;
	anotherCure = source.createMateria("cure");
	seth.equip(anotherCure);

	std::cout << std::endl << "--- UNEQUIP ---" << std::endl;
	seth.unequip(0);
	seth.equip(ice);
	std::cout << std::endl;

	return (0);
}
