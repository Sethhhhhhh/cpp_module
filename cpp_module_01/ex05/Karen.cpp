#include "Karen.hpp"

Karen::Karen(void) {
	return ;
}

Karen::~Karen(void) {
	return ;
}

void    Karen::debug(void) {
	std::cout << "J’aime avoir du bacon supplémentaire pour mon burger7XL-double-cheese-triple-pickle-special-ketchup. J’adore ça !" << std::endl;
	return ;
}

void    Karen::info(void) {
	std::cout << "Je ne peux pas croire que l’ajout de bacon supplémentaire coûte plus cher. Vous n’enmettez pas assez ! Si vous le faisiez, je n’aurais pas à le demander !" << std::endl;
	return ;
}

void    Karen::warning(void) {
	std::cout << "Je pense que je mérite d’avoir du bacon supplémentaire gratuitement. Je viens ici depuis des années et vous n’avez commencé à travailler ici que le mois dernier." << std::endl;
	return ;
}

void    Karen::error(void) {
	std::cout << "C’est inacceptable, je veux parler au responsable maintenant !" << std::endl;
	return ;
}

void    Karen::complain(std::string level) {
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Karen::*f[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level)
			(this->*f[i])();
	}
}
