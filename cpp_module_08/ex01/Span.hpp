#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <vector>
#include <stdexcept>
#include <algorithm>
#include <iostream>

class Span {

    private:
        std::vector<int>    _array;
        unsigned int        _size;
        
        Span(void) {};

    public:
        Span(unsigned int);
        Span(const Span &);
        ~Span(void);

        Span &              operator=(const Span &);
        void                addNumber(const int);
        void                addRange(std::vector<int>::iterator, std::vector<int>::iterator);
        int                 shortestSpan(void);
        int                 longestSpan(void) const;
        std::vector<int> &  getArray(void);
};

std::ostream &  operator<<(std::ostream &, Span &);

#endif