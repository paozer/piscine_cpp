#include "Ice.hpp"

/* CONSTRUCTION DESTRUCTION */
Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice& other) : AMateria("ice") { *this = other; }

Ice& Ice::operator=(const Ice& other)
{
    AMateria::operator=(other);
    return *this;
}

/* MEMBER FUNCTIONS */
void Ice::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const { return new Ice(); }
