#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
    const AAnimal*   i = new Dog();
    const AAnimal*   j = new Cat();
    
    std::cout << "Dog type: " << i->getType() << std::endl;
    std::cout << "Cat type: " << j->getType() << std::endl;    

    std::cout << "Dog sound: ";
    i->makeSound();
    std::cout << "Cat sound: ";
    j->makeSound();
    (((Dog *)i)->getBrain()).setIdea(5, "This is another idea!");

    const Dog*   k = new Dog(*((Dog *)i));

    std::cout << "Dog copy type: " << k->getType() << std::endl;
    std::cout << "Dog copy sound: ";
    k->makeSound();
    std::cout << "Idea #5: " << (k->getBrain()).getIdea(5) << std::endl;

    AAnimal*  animals[10];
    for (size_t i = 0; i < 10; i++) {
        if (i < 5) {
            animals[i] = new Cat();
        }
        else {
            animals[i] = new Dog();
        }
        animals[i]->makeSound();
    }

    delete k;
    delete j;
    delete i;

    for (size_t i = 0; i < 10; i++) {
        delete animals[i];
    }
    return (0);
}