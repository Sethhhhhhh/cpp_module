#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
    std::cout << std::endl << "----------- CREATE -----------" << std::endl;
    AAnimal *    dog = new Dog();

    AAnimal *    cat = new Cat();
    static_cast<Cat *>(cat)->getBrain().setIdea(10, "salut");
    
    AAnimal *    deepCat = new Cat(*static_cast<Cat*>(cat));
    static_cast<Cat *>(deepCat)->getBrain().setIdea(8, "lol");

    std::cout << std::endl << "------------ CAT -------------" << std::endl;

	std::cout << "Cat type: " << cat->getType() << std::endl;
	std::cout << "Cat sound: ";
	cat->makeSound();
    std::cout << "Cat idea #10: " << static_cast<Cat *>(cat)->getBrain().getIdea(10) << std::endl;
    std::cout << "Cat idea #8: " << static_cast<Cat *>(cat)->getBrain().getIdea(8) << std::endl;

	std::cout << std::endl << "------------ DOG -------------" << std::endl;

	std::cout << "Dog type: " << dog->getType() << std::endl;
	std::cout << "Dog sound: ";
	dog->makeSound();

    std::cout << std::endl << "---------- DEEP CAT ----------" << std::endl;

	std::cout << "Deep cat type: " << deepCat->getType() << std::endl;
	std::cout << "Deep cat sound: ";
	deepCat->makeSound();
    std::cout << "Deep cat idea #10: " << static_cast<Cat *>(deepCat)->getBrain().getIdea(10) << std::endl;
    std::cout << "Deep cat idea #8: " << static_cast<Cat *>(deepCat)->getBrain().getIdea(8) << std::endl;


    std::cout << std::endl;
    AAnimal *    animals[10];
    for (int i = 0; i < 10; i++) {
        std::cout << "--------- ANIMAL " << i << " -----------" << std::endl;
        if (i >= 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        animals[i]->makeSound();
        std::cout << std::endl;
    }
    std::cout << "---- DELETE ANIMALS ARRAY ----" << std::endl;
    for (int i = 0; i < 10; i++) {
        delete animals[i];
    }
    std::cout << std::endl;

    std::cout << "-- DELETE CAT, DOG, DEEPCAT --" << std::endl;
    delete dog;
    delete cat;
    delete deepCat;

    std::cout << std::endl;

    // AAnimal stack;
    // AAnimal heap = new AAnimal();

    return (0);
}