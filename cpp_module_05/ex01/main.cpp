#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    Bureaucrat  bob = Bureaucrat("bob", 45);
    Bureaucrat  lisa = Bureaucrat("lisa", 73);

    Form *      forms[4];
    for (unsigned int i = 0; i < 4; i++)
    	forms[i] = NULL;

    try {
        std::cout << bob << std::endl;

        for (unsigned int i = 0; i < 4; i++) {
        	unsigned int    signGrade (i == 0 ? 1 : i * 20);
        	unsigned int    execGrade = (i == 0 ? 5 : i * 27);

            std::string name = "form ";
            name += i + 48;
        	forms[i] = new Form(name, signGrade, execGrade);
            std::cout << *forms[i] << std::endl;
        }

        bob.signForm(*forms[3]);
        std::cout << *forms[3] << std::endl;

        lisa.signForm(*forms[1]);
    }
    catch(const std::exception & e) {
        std::cerr << e.what() << '\n';
    }

    for (unsigned int i = 0; i < 4; i++) {
    	if (forms[i] != NULL)
            delete forms[i];
    }

    return (0);
}