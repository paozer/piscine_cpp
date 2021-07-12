#include "SuperTrap.hpp"

/* CANONICAL FORM */
SuperTrap::SuperTrap() { std::cout << "Default SuperTrap Constructor" << std::endl; }

SuperTrap::SuperTrap(const std::string& name) :
    ClapTrap(name, "SUP3R-TP", 100, 100, 120, 120, 1, 60, 20, 5)
{ std::cout << "String SuperTrap Constructor" << std::endl; }

SuperTrap::~SuperTrap() { std::cout << "Default SuperTrap Destructor" << std::endl; }

SuperTrap::SuperTrap(const SuperTrap& other)
{
    std::cout << "Copy SuperTrap Constructor" << std::endl;
    *this = other;
}

SuperTrap& SuperTrap::operator=(const SuperTrap& other)
{
    std::cout << "Assignment SuperTrap Operator" << std::endl;
    ClapTrap::operator=(other);
    return *this;
}

/* MEMBER FUNCTIONS */
void SuperTrap::rangedAttack(const std::string& target) { FragTrap::rangedAttack(target); }
void SuperTrap::meleeAttack(const std::string& target) { NinjaTrap::meleeAttack(target); }
