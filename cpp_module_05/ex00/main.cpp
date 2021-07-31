#include "Bureaucrat.hpp"
#include <iostream>

int main(void) {

    Bureaucrat  bob = Bureaucrat("bob", 45);
    Bureaucrat  lisa = Bureaucrat("lisa", 73);

    std::cout << "-------- BOB --------" << std::endl;

    std::cout << bob.getName() << std::endl;
    std::cout << bob.getGrade() << std::endl;
    std::cout << bob << std::endl;

    std::cout << "-------- LISA -------" << std::endl;

    std::cout << lisa.getName() << std::endl;
    std::cout << lisa.getGrade() << std::endl;
    std::cout << lisa << std::endl;

    std::cout << "-------- SETH -------" << std::endl;

    try {
        Bureaucrat  seth = Bureaucrat("seth", 100);
        std::cout << seth << std::endl;

        seth.increase(50);
        std::cout << seth << std::endl;

        seth.decrease(101);
        std::cout << seth << std::endl;
    }
    catch(const std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}