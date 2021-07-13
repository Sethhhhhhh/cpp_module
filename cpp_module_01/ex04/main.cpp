#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char const **av)
{
	if (ac != 4)
	{
		std::cout << "[Usage] : <FILENAME> <TO_REPLACE> <REPLACEMENT>" << std::endl;
		return (1);
	}

	std::string	strToSearch(av[2]);
	std::string	strReplacement(av[3]);
	if (strToSearch.empty() || strReplacement.empty()) { 
		std::cout << "The search string or the replacement string is empty!" << std::endl;
		return (1);
	}

	std::ifstream	file(av[1]);
	std::string		replacementFileName(av[1]);
	std::ofstream	replaceFile(replacementFileName + ".replace");
	std::string		line;
	std::string		strReplaceFile;

	if (replacementFileName.empty() || !file.is_open()) {
		std::cout << "Cannot open the file!" << std::endl;
		return (1);
	}
	if (!replaceFile.is_open()) {
		std::cout << "Cannot open the replace file!" << std::endl;	
		return (1);
	}

	while (std::getline(file, line)) {
		size_t	len = strToSearch.length();
		while (true) {
			size_t	pos = line.find(strToSearch);
			if (pos != std::string::npos)
				line.replace(pos, len, strReplacement) + '\n';
			else
				break;
		}
		strReplaceFile += (line + '\n');
	}
	replaceFile << strReplaceFile << std::endl;
	
	replaceFile.close();
	file.close();

	return (0);
}
