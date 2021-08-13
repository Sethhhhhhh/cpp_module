#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int	main(int ac, char const **av)
{
    size_t      pos;
    size_t      len;
    std::string line;
    std::string content;
    std::string toFind;
    std::string toReplace;

    if (ac != 4) {
        std::cerr << "Usage: <file> <to_find> <to_replace>" << std::endl;
        return (1);
    }

    toFind = av[2];
    toReplace = av[3];
    if (!toFind.compare(toReplace)) {
        std::cerr << "The replacement and search phrase is the same." << std::endl;
        return (1);
    }
    
    std::ifstream   file(av[1]);
    if (!file.is_open()) {
        std::cerr << "Cannot open the request file." << std::endl;
        return (0);
    }

    std::ofstream   replaceFile((av[1] + std::string(".replace")).c_str());
    if (!replaceFile.is_open()) {
        std::cerr << "Unable to create the replacement file." << std::endl;
        return (0);
    }

    len = toFind.size();
    pos = 0;
    while (std::getline(file, line)) {
        while ((pos = line.find(av[2])) != std::string::npos) {
            line.erase(pos, len);
            line.insert(pos, av[3]);
        }
        content += line + '\n';
    }
    replaceFile << content << std::endl;
    
    file.close();
    replaceFile.close();

    return (0);
}
