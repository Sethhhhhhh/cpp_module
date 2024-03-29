#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {

	FragTrap	seth("seth");
	FragTrap	asta("asta");
	FragTrap	deku("deku");
	ClapTrap	tanjiro("tanjiro");

	std::cout << "------------------------------" << std::endl;

	/* Print default params */

	std::cout << "Seth health: " << seth.getHealth() << std::endl;
	std::cout << "Asta health: " << asta.getHealth() << std::endl;
	std::cout << "Deku health: " << deku.getHealth() << std::endl;
	std::cout << "Tanjiro health: " << tanjiro.getHealth() << std::endl;

	std::cout << "------------------------------" << std::endl;

	std::cout << "Seth energy: " << seth.getEnergy() << std::endl;
	std::cout << "Asta energy: " << asta.getEnergy() << std::endl;
	std::cout << "Deku energy: " << deku.getEnergy() << std::endl;
	std::cout << "Tanjiro energy: " << tanjiro.getEnergy() << std::endl;

	std::cout << "------------------------------" << std::endl;

	std::cout << "Seth attack damage: " << seth.getAttackDamage() << std::endl;
	std::cout << "Asta attack damage: " << asta.getAttackDamage() << std::endl;
	std::cout << "Deku attack damage: " << deku.getAttackDamage() << std::endl;
	std::cout << "Tanjiro attack damage: " << tanjiro.getAttackDamage() << std::endl;

	std::cout << "------------------------------" << std::endl;
	
	/* Seth take damage by Asta */

	asta.attack("seth");
	seth.takeDamage(asta.getAttackDamage());
	std::cout << "Seth health: " << seth.getHealth() << std::endl;
	
	std::cout << "------------------------------" << std::endl;

	/* The life of Asta is repaired */

	asta.beRepaired(50);
	std::cout << "Asta health: " << asta.getHealth() << std::endl;

	std::cout << "------------------------------" << std::endl;

	/* Seth take damage by Deku */

	deku.attack("seth");
	seth.takeDamage(deku.getAttackDamage());
	std::cout << "Seth health: " << seth.getHealth() << std::endl;

	seth.beRepaired(5);
	std::cout << "Seth health: " << seth.getHealth() << std::endl;

	std::cout << "------------------------------" << std::endl;

	tanjiro.attack("seth");
	seth.takeDamage(tanjiro.getAttackDamage());
	std::cout << "Seth health: " << seth.getHealth() << std::endl;

	std::cout << "------------------------------" << std::endl;

	seth.highFivesGuys();
	asta.highFivesGuys();
	deku.highFivesGuys();

	std::cout << "------------------------------" << std::endl;

	return (0);
}