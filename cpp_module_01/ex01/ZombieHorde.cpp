#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name) {
    Zombie  *zombie_horde = new Zombie[N];

    for (size_t i = 0; i < N; i++) {
        zombie_horde[i].setName(name + "_" + std::to_string(i));
    }
    return (zombie_horde);
}