#ifndef __WHATEVER_HPP__
#define __WHATEVER_HPP__

template<typename T>
void    swap(T & a, T & b) {
    T c = b;
    b = a;
    a = c;
    
    return ;
}

template<typename T>
T & min(T & a, T & b) {
    return ((a > b ? b : a));
}

template<typename T>
T & max(T & a, T & b) {
    return ((a > b ? a : b));
}

#endif