#include "RadScorpion.hpp"

RadScorpion::RadScorpion() :
	Enemy(80, "Rad Scorpion")
{ std::cout << "* click click click *" << std::endl; }

RadScorpion::~RadScorpion()
{ std::cout << "* SCROTCH *" << std::endl; }

RadScorpion::RadScorpion(const RadScorpion& other) :
	Enemy(80, "Rad Scorpion")
{ *this = other; }

RadScorpion& RadScorpion::operator=(const RadScorpion& other)
{
	Enemy::operator=(other);
	return (*this);
}
