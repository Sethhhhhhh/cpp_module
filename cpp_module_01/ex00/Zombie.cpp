#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
    return ;
}

Zombie::~Zombie(void) {
    std::cout << _getName() << " was killed!" << std::endl;
    return ;
}

std::string Zombie::_getName() const {
    return (_name);
}

void    Zombie::announce(void) {
    std::cout << _getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}
