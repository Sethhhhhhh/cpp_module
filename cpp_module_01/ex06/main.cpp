#include "Karen.hpp"

int	main(int ac, char **av) {
	Karen	karen;
	enum	e_levels {DEBUG = 0, INFO, WARNING, ERROR};
	size_t	level;

	if (ac != 2)
	{
		std::cout << "[Usage]: ./karenFilter <FILTER>" << std::endl;
		return (1);
	}
	for (level = 0; level < 4; level++)
		if (av[1] == karen.levels[level])
			break ;
	switch (level)
	{
		case DEBUG:
			karen.complain("DEBUG");
		case INFO:
			karen.complain("INFO");
		case WARNING:
			karen.complain("WARNING");
		case ERROR:
			karen.complain("ERROR");
			break;
		default:
			std::cout << "[ Probablement plainte de problèmes insignifiants ]" << std::endl;
			break;
	}
	return (0);
}