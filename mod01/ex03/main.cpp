#include "ZombieHorde.hpp"
#include <iostream>

int main()
{
    std::srand(time(NULL));
    ZombieHorde zh0 = ZombieHorde(5);
    zh0.announce();
    std::cout << std::endl;
    ZombieHorde zh1 = ZombieHorde(32);
    zh1.announce();
    std::cout << std::endl;
    ZombieHorde zh2 = ZombieHorde(1);
    zh2.announce();
    return 0;
}
