#include "ScavTrap.hpp"

/* CANONICAL FORM */
ScavTrap::ScavTrap() { std::cout << "Default ScavTrap Constructor" << std::endl; }

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name, "SC4V-TP", 100, 100, 50, 50, 1, 20, 15, 3)
{ std::cout << "String ScavTrap Constructor" << std::endl; }

ScavTrap::~ScavTrap() { std::cout << "Default ScavTrap Destructor" << std::endl; }

ScavTrap::ScavTrap(const ScavTrap& other)
{
    std::cout << "Copy ScavTrap Constructor" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "Assignment ScavTrap Operator" << std::endl;
    ClapTrap::operator=(other);
    return *this;
}

/* MEMBER FUNCTIONS */
void ScavTrap::challengeNewcomer(std::string const& target)
{
    if (_energy_points < 25)
        std::cout << "SC4V-TP " << _name << " has not enough energy left to challenge anybody." << std::endl;
    else {
        int rand_challenge = rand() % 5;
        int rand_damage = rand() % 100;
        static std::string challenge[5] = {"potato", "love", "ninja", "beer", "hacker"};

        _energy_points -= 25;
        std::cout << "SC4V-TP " << _name << " challenges the infamous " << target << " at the " << challenge[rand_challenge] << " challenge, causing " << rand_damage << " points of damage" << std::endl;
    }
}
