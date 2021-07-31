#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void) {

    Bureaucrat  bob = Bureaucrat("bob", 45);
    Bureaucrat  lisa = Bureaucrat("lisa", 73);

    try {
        Form    form = Form("seth", 1, 160);
        std::cout << form << std::endl;
    }
    catch(const std::exception & e) {
        std::cerr << e.what() << '\n';
    }

    return (0);
}