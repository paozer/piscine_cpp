#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main()
{
    ZombieEvent ze;

    std::srand(time(NULL));
    std::cout << "Type is [really angry]" << std::endl;
    ze.setZombieType("really angry");
    ze.randomChump();
    Zombie* z0 = ze.newZombie("z0");
    Zombie* z1 = ze.newZombie("z1");
    z0->announce();
    z1->announce();

    std::cout << std::endl << "Type is [not so angry]" << std::endl;
    ze.setZombieType("not so angry");
    ze.randomChump();
    Zombie* z2 = ze.newZombie("z2");
    z2->announce();

    std::cout << std::endl << "Type is [friendly]" << std::endl;
    ze.setZombieType("friendly");
    Zombie* z3 = ze.newZombie("z3");
    z0->announce();
    z1->announce();
    z2->announce();
    z3->announce();
    ze.randomChump();
    delete z0;
    delete z1;
    delete z2;
    delete z3;
}
