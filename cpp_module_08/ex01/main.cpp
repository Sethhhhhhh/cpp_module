#include "Span.hpp"

int main(void) {
    Span    span(5);

    try {
        span.addNumber(4);
        span.addNumber(-2);
        span.addNumber(8);
        span.addNumber(11);
        span.addNumber(9);
        span.addNumber(44855484);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << span << std::endl;

    std::cout << span.shortestSpan() << std::endl;
    std::cout << span.longestSpan() << std::endl;

    return (0);
}