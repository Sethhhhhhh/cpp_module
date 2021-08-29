#include "Span.hpp"

int main(void) {
    Span    span(5);

    try {
        std::cout << span.shortestSpan() << std::endl;
        std::cout << span.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        span.addNumber(4);
        span.addNumber(-2);
        span.addNumber(8);
        span.addNumber(11);
        span.addNumber(9);
        span.addNumber(24);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << span.shortestSpan() << std::endl;
        std::cout << span.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    /* SUBJECT MAIN */
    Span sp = Span(5);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    return (0);
}