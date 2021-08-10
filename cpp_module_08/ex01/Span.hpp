#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <vector>
#include <stdexcept>
#include <algorithm>

class Span {

    private:
        std::vector<int>    _array;

    public:
        Span(void) {};
        Span(unsigned int);
        Span(const Span &);
        ~Span(void);

        Span &  operator=(const Span &);
        void    addNumber(const int);
        int     shortestSpan(void) const;
        int     longestSpan(void) const;
};

#endif