#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(const std::string & type) :
	_xp(0), _type(type)
{}

AMateria::~AMateria()
{}

AMateria::AMateria(const AMateria& other)
{ *this = other; }

AMateria& AMateria::operator=(const AMateria& other)
{
	(void) other;
	return (*this);
}

std::string const& AMateria::getType() const { return(_type); }
unsigned int AMateria::getXP() const { return(_xp); }
void AMateria::updateXp() { _xp += 10; }
void AMateria::use(ICharacter& target)
{
	(void) target;
	// idea: make it so that both overiding and overidden
	// member functions are called
}
