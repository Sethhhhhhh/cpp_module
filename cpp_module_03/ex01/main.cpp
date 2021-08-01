#include "ScavTrap.hpp"

int	main(void) {

	ScavTrap	seth("seth");
	ScavTrap	asta("asta");
	ScavTrap	deku("deku");

	std::cout << "------------------------------" << std::endl;

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

	/* Seth take damage by Asta */

	seth.takeDamage(asta.attack("seth"));
	std::cout << "Seth health: " << seth.getHealth() << std::endl;

	std::cout << "------------------------------" << std::endl;

	/* The life of Asta is repaired */

	seth.beRepaired(50);
	std::cout << "Asta health: " << seth.getHealth() << std::endl;

	std::cout << "------------------------------" << std::endl;

	/* Asta take damage by Deku */

	asta.takeDamage(deku.attack("asta"));
	std::cout << "Asta health: " << asta.getHealth() << std::endl;

	asta.beRepaired(5);
	std::cout << "Asta health: " << asta.getHealth() << std::endl;

	std::cout << "------------------------------" << std::endl;

	seth.guardGate();
	asta.guardGate();
	deku.guardGate();

	std::cout << "------------------------------" << std::endl;

	return (0);
}