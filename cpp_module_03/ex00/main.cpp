#include "ClapTrap.hpp"

int	main(void) {

	ClapTrap	seth("seth");
	ClapTrap	asta("asta");
	ClapTrap	deku("deku");

	/* Print default params */

	std::cout << "Seth health: " << seth.getHealth() << std::endl;
	std::cout << "Asta health: " << asta.getHealth() << std::endl;
	std::cout << "Deku health: " << deku.getHealth() << std::endl;

	std::cout << "------------------------------" << std::endl;

	std::cout << "Seth energy: " << seth.getEnergy() << std::endl;
	std::cout << "Asta energy: " << asta.getEnergy() << std::endl;
	std::cout << "Deku energy: " << deku.getEnergy() << std::endl;

	std::cout << "------------------------------" << std::endl;

	std::cout << "Seth attack damage: " << seth.getAttackDamage() << std::endl;
	std::cout << "Asta attack damage: " << asta.getAttackDamage() << std::endl;
	std::cout << "Deku attack damage: " << deku.getAttackDamage() << std::endl;

	std::cout << "------------------------------" << std::endl;
	
	/* Set attack damage and print */

	seth.setAttackDamage(10);
	asta.setAttackDamage(20);
	deku.setAttackDamage(30);

	std::cout << "Seth attack damage: " << seth.getAttackDamage() << std::endl;
	std::cout << "Asta attack damage: " << asta.getAttackDamage() << std::endl;
	std::cout << "Deku attack damage: " << deku.getAttackDamage() << std::endl;

	std::cout << "------------------------------" << std::endl;

	/* Seth take damage by Asta */

	seth.takeDamage(asta.attack("seth"));
	std::cout << "Seth health: " << seth.getHealth() << std::endl;
	
	std::cout << "------------------------------" << std::endl;

	/* The life of Asta is repaired */

	asta.beRepaired(50);
	std::cout << "Asta health: " << asta.getHealth() << std::endl;

	std::cout << "------------------------------" << std::endl;

	/* Asta take damage by Deku */

	asta.takeDamage(deku.attack("asta"));
	std::cout << "Asta health: " << asta.getHealth() << std::endl;

	return (0);
}