#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T & container, int i) {
    typename T::iterator element = std::find(container.begin(), container.end(), i);
    if (element == container.end())
        throw std::invalid_argument("The value has not been found!");
    return (element);
}

#endif