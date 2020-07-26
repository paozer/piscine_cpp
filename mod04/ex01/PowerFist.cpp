#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(const PowerFist& other) : AWeapon("Power Fist", 8, 50)
{ *this = other; }

PowerFist::~PowerFist() {}

PowerFist& PowerFist::operator=(const PowerFist& other)
{
    AWeapon::operator=(other);
    return (*this);
}

void PowerFist::attack() const { std::cout << "* pschhh... SBAM! *" << std::endl; }
