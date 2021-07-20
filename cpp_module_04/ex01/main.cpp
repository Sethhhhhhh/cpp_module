#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
    const Animal*   i = new Dog();
    const Animal*   j = new Cat();
    
    std::cout << "Dog type: " << i->getType() << std::endl;
    std::cout << "Cat type: " << j->getType() << std::endl;    

    std::cout << "Dog sound: ";
    i->makeSound();
    std::cout << "Cat sound: ";
    j->makeSound();

    j->makeSound();

    const Animal*   k = new Dog(*((Dog *)i));

    std::cout << "Dog copy type: " << k->getType() << std::endl;
    std::cout << "Dog copy sound: ";
    k->makeSound();

    const Animal*  animals[10];
    for (size_t i = 0; i < 10; i++) {
        if (i < 5)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
        animals[i]->makeSound();
    }

    delete j;
    delete i;

    for (size_t i = 0; i < 10; i++) {
        delete animals[i];
    }
    return (0);
}