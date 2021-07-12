#include "AMateria.hpp"

/* CONSTRUCTION DESTRUCTION */
AMateria::AMateria() {}

AMateria::AMateria(const std::string & type) : _xp(0), _type(type) {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria& other) { *this = other; }

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this != &other)
        _xp = other._xp;
    return *this;
}

/* MEMBER FUNCTIONS */
std::string const& AMateria::getType() const { return(_type); }

unsigned int AMateria::getXP() const { return(_xp); }

void AMateria::use(ICharacter& target)
{
    (void) target;
    _xp += 10;
}
