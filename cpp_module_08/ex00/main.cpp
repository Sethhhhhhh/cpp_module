#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(void) {

    std::vector<int> array;

    std::cout << "----- CREATE -----" << std::endl;
    for (unsigned int i = 5; i < 15; i++) {
        array.push_back(i);
    }
    for (std::vector<int>::iterator i = array.begin(); i != array.end(); i++) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    std::cout << "----- VALID VALUE -----" << std::endl;
    try {
        std::vector<int>::iterator i = easyfind(array, 8);
        std::cout << *i << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "----- INVALID VALUE -----" << std::endl;
    try {
        std::vector<int>::iterator i = easyfind(array, 0);
        std::cout << *i << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}