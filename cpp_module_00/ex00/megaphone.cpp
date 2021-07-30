#include <iostream>

int main(int ac, char **av) {

    if (ac <= 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    else {
        for (unsigned int i = 1; i < (unsigned int)ac; i++) {
            for (unsigned int j = 0; av[i][j]; j++)
                av[i][j] = toupper(av[i][j]);
            std::cout << av[i];
        }
        std::cout << std::endl;
    }
}