#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <iostream>

template<typename T>
void    iter(T * array, size_t length, void (*f)(T const & x)) {
    for (size_t i = 0; i < length; i++) {
        (*f)(array[i]);
    }
}

template<typename T>
void    print(T const & x) {
    std::cout << x << std::endl;

    return ;
}

#endif