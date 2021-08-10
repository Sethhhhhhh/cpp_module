#include "Span.hpp"

Span::Span(unsigned int n) {
    _array.push_back(n);

    return ;
}

Span::Span(const Span & src) {
    std::vector<int>    tmp = src._array;
    for (std::vector<int>::iterator i = tmp.begin(); i != tmp.end(); i++) {
        _array.push_back(*i);
    }

    return ;
}

Span &  Span::operator=(const Span & src) {
    std::vector<int>    tmp = src._array;
    for (std::vector<int>::iterator i = tmp.begin(); i != tmp.end(); i++) {
        _array.push_back(*i);
    }

    return (*this);
}

void    Span::addNumber(const int n) {
    std::vector<int>::iterator e = std::find(_array.begin(), _array.end(), n);
    if (e == _array.end())
        _array.push_back(n);
    else
        throw std::invalid_argument("Value is already in array!");
}

int     Span::shortestSpan(void) const {
    return (0);
}

int     Span::longestSpan(void) const {
    if (_array.size() <= 1)
        throw std::invalid_argument("Value is already in array!");
    
    int min = *std::min_element(_array.begin(), _array.end());
    int max = *std::max_element(_array.begin(), _array.end());
    
    return (max - min);
}