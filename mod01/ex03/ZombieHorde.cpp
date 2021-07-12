#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : zb(new Zombie[n]), len(n)
{
    std::string name[5] = {"Xorg", "Pepe", "Angry", "Maria", "Ben"};
    for (int i = 0; i < len; ++i)
        zb[i] = Zombie(name[rand() % 5], "more_brainz");
}

ZombieHorde::~ZombieHorde() { delete[] zb; }

void ZombieHorde::announce()
{
    for (int i = 0; i < len; ++i)
        zb[i].announce();
}
