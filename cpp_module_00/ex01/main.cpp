#include "Contact.hpp"
#include <limits>

void	show(Contact (&phonebook)[8])
{
	size_t		index;
	size_t		i;
	bool		ret;

	index = 0;
	ret = false;
	std::cout << std::endl;
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;

	for (i = 0; phonebook[i].is_setup(); i++) {
		phonebook[i].show_column();
		std::cout << std::endl;
		
	}
	std::cout << std::endl << "Write the index of the contact you wish to inspect: ";
	while (!(std::cin >> index) || index < 1 || index > i) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Bad input, please retry: ";
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << std::endl;
	phonebook[(index - 1)].show();
	std::cout << std::endl;
}

int main(void)
{
	Contact     phonebook[8];
	std::string input;
	size_t		i;

	i = 0;
	while (1) {
		std::cout << "> ";
		std::getline(std::cin, input);
		if (!input.compare("ADD")) {
			if (i < 8) {
				phonebook[i].setup(i);
				i++;
			}
			else
				std::cout << "Your contact list is full!" << std::endl;
		}
		else if (!input.compare("SEARCH")) {
			if (i > 0)
				show(phonebook);
			else
				std::cout << "No one is registered in your phonebook, please use the ADD command to register a contact!" << std::endl;
		}
		else if (!input.compare("EXIT"))
			break;
	}
	return (0);
}
