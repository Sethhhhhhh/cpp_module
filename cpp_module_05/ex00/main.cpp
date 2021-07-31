#include "Bureaucrat.hpp"
#include <iostream>

int main(void) {

    Bureaucrat  bob = Bureaucrat("bob", 45);
    Bureaucrat  lisa = Bureaucrat("lisa", 73);

    std::cout << "-------- BOB --------" << std::endl;

    std::cout << bob.getName() << std::endl;
    std::cout << bob.getGrade() << std::endl;

    std::cout << "-------- LISA -------" << std::endl;

    std::cout << lisa.getName() << std::endl;
    std::cout << lisa.getGrade() << std::endl;

    return (0);
}