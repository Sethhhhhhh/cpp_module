#include "class/Contact/Contact.hpp"

void	show(Contact (&phonebook)[8])
{
	size_t		index;
	size_t		i;
	bool		ret;

	index = 0;
	ret = false;
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	
	for (i = 0; phonebook[i].is_setup(); i++) {
		phonebook[i].show_column();
		std::cout << std::endl;
	}
	while (!ret || index < 1 || index > i) {
		std::cout << std::endl << "Write the index of the contact you wish to inspect: ";
		ret = !(std::cin >> index);
	}
	std::cout << std::endl;
	phonebook[(index - 1)].show();
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
		if (!input.compare("ADD") && i < 8) {
			phonebook[i].setup(i);
			i++;
		}
		else if (!input.compare("SEARCH")) {
			show(phonebook);
		}
		else if (!input.compare("EXIT"))
			break;
	}
	return (0);
}