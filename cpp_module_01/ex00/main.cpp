#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombie_in_heap;

    zombie_in_heap = newZombie("Seth");
    zombie_in_heap->announce();
    delete zombie_in_heap;

    randomChump("Deku");
    return (0);
}