#include "Span.hpp"
#include <algorithm>
#include <ctime>
#include <cstdlib>

int randomNumber(void) { 
    return (std::rand() % 100);
}

int main(void) {
    Span    span(5);

    std::srand(unsigned(std::time(0)));

    try {
        std::cout << span.shortestSpan() << std::endl;
        std::cout << span.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::vector<int>            array(10000);
        std::vector<int>::iterator  start = array.begin();
        std::vector<int>::iterator  end = array.end();
        
        std::generate (start, end, randomNumber);
        span.addRange(start, end);
        std::cout << "-----------------" << std::endl;
        while (start != end) {
            std::cout << *start << " ";
            start++;
        }
        std::cout << "\n-----------------" << std::endl;
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