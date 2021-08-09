#include "iter.hpp"

int main(void) {

    {
        int array[4] = {1, 2, 3, 4};
        iter(array, 4, print);
        std::cout << std::endl;
    }
    {
        float   array[4] = {1.1, 2.2, 3.3, 4.4};
        iter(array, 4, print);
        std::cout << std::endl;
    }
    {
        std::string array[4] = {"Seth", "Deku", "Asta", "Tanjiro"};
        iter(array, 4, print);
        std::cout << std::endl;
    }
    {
        char array[4] = {'S', 'e', 't', 'h'};
        iter(array, 4, print);
        std::cout << std::endl;
    }

    return (0);
}