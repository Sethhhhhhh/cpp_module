#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
    const Animal*   animal = new Animal();
    const Animal*   dog = new Dog();
    const Animal*   cat = new Cat();
    const WrongAnimal*   wrongAnimal = new WrongAnimal();
    const WrongAnimal*   wrongCat = new WrongCat();

    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;
    std::cout << "Animal type: " << animal->getType() << std::endl;
    std::cout << "Wrong cat type: " << wrongCat->getType() << std::endl;
    std::cout << "Wrong animal type: " << wrongAnimal->getType() << std::endl;

    std::cout << std::endl;

    std::cout << "Dog sound: ";
    dog->makeSound();
    std::cout << "Cat sound: ";
    cat->makeSound();
    std::cout << "Animal sound: ";
    animal->makeSound();
    std::cout << "Wrong cat sound: ";
    wrongCat->makeSound();
    std::cout << "Wrong animal sound: ";
    wrongAnimal->makeSound();

    delete  animal;
    delete  dog;
    delete  cat;
    delete  wrongAnimal;
    delete  wrongCat;

    return (0);
}