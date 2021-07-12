#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
    srand(time(NULL));
    FragTrap f0 ("f0");
    FragTrap f1 ("f1");
    FragTrap f2 ("f2");
    std::cout << std::endl;

    // uncomment to test operator overloads/copy constructor
    /*
    FragTrap f3;
    f3 = f0;
    std::cout << std::endl;
    FragTrap f4 (f1);
    std::cout << std::endl;
    FragTrap f5;
    f5 = f5;
    std::cout << std::endl;

    f3.vaulthunter_dot_exe("a troll");
    f3.vaulthunter_dot_exe("another troll");
    f4.meleeAttack("the world");
    f4.rangedAttack("the c++ piscine");
    std::cout << std::endl;

    f3.takeDamage(4);
    f4.takeDamage(40);
    f4.takeDamage(200);
    f4.takeDamage(99);
    std::cout << std::endl;

    f3.beRepaired(9000);
    f4.beRepaired(11);
    f4.beRepaired(94);
    std::cout << std::endl;
    */

    f0.vaulthunter_dot_exe("a troll");
    f0.vaulthunter_dot_exe("another troll");
    f1.meleeAttack("the world");
    f2.rangedAttack("the c++ piscine");
    std::cout << std::endl;

    f0.takeDamage(4);
    f1.takeDamage(40);
    f1.takeDamage(200);
    f1.takeDamage(1);
    f2.takeDamage(99);
    std::cout << std::endl;

    f0.beRepaired(9000);
    f1.beRepaired(11);
    f2.beRepaired(94);
    std::cout << std::endl;

    ScavTrap s0 ("s0");
    ScavTrap s1 ("s1");
    ScavTrap s2 ("s2");
    std::cout << std::endl;

    s0.challengeNewcomer("troll");
    s0.challengeNewcomer("second troll");
    s0.challengeNewcomer("third troll");
    s1.meleeAttack("the world");
    s2.rangedAttack("the c++ piscine");
    std::cout << std::endl;

    s0.takeDamage(4);
    s1.takeDamage(40);
    s1.takeDamage(200);
    s2.takeDamage(99);
    std::cout << std::endl;

    s0.beRepaired(9000);
    s1.beRepaired(11);
    s2.beRepaired(94);
    std::cout << std::endl;

    NinjaTrap n0 ("n0");
    NinjaTrap n1 ("n1");
    NinjaTrap n2 ("n2");
    std::cout << std::endl;

    n0.ninjaShoebox(f0);
    n0.ninjaShoebox(n1);
    n0.ninjaShoebox(s1);
    std::cout << std::endl;

    n0.takeDamage(4);
    n1.takeDamage(40);
    n1.takeDamage(200);
    n2.takeDamage(1);
    std::cout << std::endl;

    n0.beRepaired(9000);
    n1.beRepaired(11);
    n2.beRepaired(0);
    std::cout << std::endl;
    return 0;
}
