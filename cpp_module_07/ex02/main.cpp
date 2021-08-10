#include "Array.hpp"
#include <iostream>

int main(void) {
    
    std::cout << "----- INT -----" << std::endl;
    {
        Array<int>  array(5);

        try {
            for (unsigned int i = 0; i < array.size(); i++) {
                array[i] = i;
            }

            for (unsigned int i = 0; i < array.size(); i++) {
                std::cout << array[i] << " ";
            }
            std::cout << std::endl;

            std::cout << array[6] << std::endl;
        }
        catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }

    std::cout << "----- FLOAT -----" << std::endl;
    {
        Array<float>    array(10);
        float           f[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};

        try {
            for (unsigned int i = 0; i < array.size(); i++) {
                array[i] = f[i];
            }

            for (unsigned int i = 0; i < array.size(); i++) {
                std::cout << array[i] << " ";
            }
            std::cout << std::endl;

            std::cout << array[10] << std::endl;
        }
        catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
    
    std::cout << "----- STRINGS -----" << std::endl;
    {
        Array<std::string>    array(4);
        std::string     strs[4] = {"Seth", "Deku", "Asta", "Tanjiro"};

        try {
            for (unsigned int i = 0; i < array.size(); i++) {
                array[i] = strs[i];
            }

            for (unsigned int i = 0; i < array.size(); i++) {
                std::cout << array[i] << " ";
            }
            std::cout << std::endl;

            std::cout << array[8] << std::endl;
        }
        catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }

    return (0);
}