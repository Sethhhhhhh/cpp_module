#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(void) {

    std::vector<int> array;

    for (unsigned int i = 5; i < 15; i++) {
        array.push_back(i);
    }
    for (std::vector<int>::iterator i = array.begin(); i != array.end(); i++) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    try {
        std::vector<int>::iterator i = easyfind(array, 0);
        std::cout << *i << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}