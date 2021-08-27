#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *  generate(void) {
    std::srand(std::time(NULL));
    int i = std::rand() % 3;

    if (i == 0) {
        std::cout << "[A] Created" << std::endl;
        return (new A);
    }
    else if (i == 1) {
        std::cout << "[B] Created" << std::endl;
        return (new B);
    }
    else {
        std::cout << "[C] Created" << std::endl;
        return (new C);
    }
}

void    identify_from_pointer(Base * p) {
    try {
        A &a = dynamic_cast<A&>(*p);
        (void)a;
        std::cout << "[A] identify_from_pointer" << std::endl;
    }
    catch (const std::exception & e) {
        try {
            B &b = dynamic_cast<B&>(*p);
            (void)b;
            std::cout << "[B] identify_from_pointer" << std::endl;
        }
        catch (const std::exception & e) {
            try {
                C &c = dynamic_cast<C&>(*p);
                (void)c;
                std::cout << "[C] identify_from_pointer" << std::endl;
            }
            catch (const std::exception & e) {
                std::cerr << e.what() << '\n';
            }   
        }
    }
}

void    identify_from_reference(Base & p) {
    try {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "[A] identify_from_reference" << std::endl;
    }
    catch (const std::exception & e) {
        try {
            B &b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "[B] identify_from_reference" << std::endl;
        }
        catch (const std::exception & e) {
            try {
                C &c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "[C] identify_from_reference" << std::endl;
            }
            catch (const std::exception & e) {
                std::cerr << e.what() << '\n';
            }   
        }
    }
}

int main(void) {

    Base * random = generate();
    identify_from_pointer(random);
    identify_from_reference(*random);

    delete random;

    return (0);
}