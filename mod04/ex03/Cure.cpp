#include "Cure.hpp"

/* CONSTRUCTION DESTRUCTION */
Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure& other) : AMateria("cure") { *this = other; }

Cure& Cure::operator=(const Cure& other)
{
    AMateria::operator=(other);
    return *this;
}

/* MEMBER FUNCTIONS */
void Cure::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const { return new Cure(); }
