#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {

    Bureaucrat  bob = Bureaucrat("bob", 45);
    Bureaucrat  lisa = Bureaucrat("lisa", 73);
    Form *      forms[10];

    try {
        std::cout << bob << std::endl;

        for (unsigned int i = 0; i < 10; i++) {
            forms[i] = new Form("form " + std::to_string(i), 50, 50);
            std::cout << *forms[i] << std::endl;
        }
        
        bob.signForm(*forms[0]);
        lisa.signForm(*forms[1]);
    }
    catch(const std::exception & e) {
        std::cerr << e.what() << '\n';
    }

    for (unsigned int i = 0; i < 10; i++)
        delete forms[i];

    return (0);
}