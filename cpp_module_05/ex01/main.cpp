#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void) {

    Bureaucrat  bob = Bureaucrat("bob", 45);
    Bureaucrat  lisa = Bureaucrat("lisa", 73);

    Form    form = Form();

    std::cout << form << std::endl;

    return (0);
}