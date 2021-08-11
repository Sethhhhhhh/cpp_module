#include "Span.hpp"

Span::Span(unsigned int n) : _size(n) {
    return ;
}

Span::Span(const Span & src) {
    std::vector<int>    tmp = src._array;
    for (std::vector<int>::iterator i = tmp.begin(); i != tmp.end(); i++) {
        _array.push_back(*i);
    }
    _size = src._size;

    return ;
}

Span &  Span::operator=(const Span & src) {
    std::vector<int>    tmp = src._array;
    for (std::vector<int>::iterator i = tmp.begin(); i != tmp.end(); i++) {
        _array.push_back(*i);
    }
    _size = src._size;

    return (*this);
}

Span::~Span(void) {
    return ;
}

void    Span::addNumber(const int n) {
    if (_array.size() >= _size)
        throw std::invalid_argument("There is no more space to store this value!");

    std::vector<int>::iterator e = std::find(_array.begin(), _array.end(), n);
    if (e == _array.end())
        _array.push_back(n);
    else
        throw std::invalid_argument("Value is already in array!");
}

int     Span::shortestSpan(void) {
    int min;

    min = abs(*std::max_element(_array.begin(), _array.end()) - *std::min_element(_array.begin(), _array.end()));
    for (std::vector<int>::iterator i = _array.begin(); i != _array.end(); i++) {
        for (std::vector<int>::iterator j = (i + 1); j != _array.end(); j++) {
            if (abs(*j - *i) < min)
                min = abs(*j - *i);
        }
    }

    return (min);
}

int     Span::longestSpan(void) const {
    if (_array.size() <= 1)
        throw std::invalid_argument("Value is already in array!");
    
    int min = *std::min_element(_array.begin(), _array.end());
    int max = *std::max_element(_array.begin(), _array.end());

    return (max - min);
}

std::vector<int> &  Span::getArray(void) {
    return (_array);
}

std::ostream &  operator<<(std::ostream & o, Span & src) {
    std::vector<int> &  tmp = src.getArray();

    for (std::vector<int>::iterator i = tmp.begin(); i != tmp.end(); i++) {
        std::cout << *i;
        if (i != tmp.end() - 1)
            std::cout << " ";
    }
    return (o);
}