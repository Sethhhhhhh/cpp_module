#include "Zombie.hpp"

int s_error(void)
{
    std::cout << "Please, specify the number of zombies you want to create!" << std::endl;
    return (0);
}

int main(int ac, char **av)
{
    Zombie  *zombie_horde;
    int     N;

    if (ac != 2)
        return (s_error());
    N = atoi(av[1]);
    if (N <= 0) 
        return (s_error());
    zombie_horde = zombieHorde(N, "seth");
    for (int i = 0; i < N; i++) {
        zombie_horde[i].announce();
    }
    delete [] zombie_horde;
    return (0);
}