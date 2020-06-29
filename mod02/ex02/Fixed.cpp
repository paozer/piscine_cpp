#include "Fixed.hpp"

/* CONSTRUCTION & DESTRUCTION */

Fixed::Fixed() : fixed_point_value(0) {}

Fixed::Fixed(const int nb) : fixed_point_value(nb << binary_point) {}

Fixed::Fixed(const float nb) : fixed_point_value(roundf(nb * (1 << binary_point))) {}

Fixed::Fixed(const Fixed& other) { fixed_point_value = other.getRawBits(); }

Fixed::~Fixed() {}

/* OPERATOR OVERLOADS */

Fixed& Fixed::operator=(const Fixed& other)
{
	fixed_point_value = other.getRawBits();
	return (*this);
}

bool Fixed::operator<(const Fixed& other) const { return (this->getRawBits() < other.getRawBits()); }
bool Fixed::operator>(const Fixed& other) const { return (this->getRawBits() > other.getRawBits()); }
bool Fixed::operator>=(const Fixed& other) const { return (this->getRawBits() >= other.getRawBits()); }
bool Fixed::operator<=(const Fixed& other) const { return (this->getRawBits() <= other.getRawBits()); }
bool Fixed::operator==(const Fixed& other) const { return (this->getRawBits() == other.getRawBits()); }
bool Fixed::operator!=(const Fixed& other) const { return (this->getRawBits() != other.getRawBits()); }

Fixed Fixed::operator+(const Fixed& other) const
{
	return (Fixed ((this->getRawBits() + other.getRawBits()) >> this->binary_point));
}
Fixed Fixed::operator-(const Fixed& other) const
{
	return (Fixed ((this->getRawBits() - other.getRawBits()) >> this->binary_point));
}
Fixed Fixed::operator*(const Fixed& other) const
{
	return (Fixed ((this->getRawBits() * other.getRawBits()) >> (2 * this->binary_point)));
}
Fixed Fixed::operator/(const Fixed& other) const
{
	return (Fixed ((this->getRawBits() / other.getRawBits()) >> (2 * this->binary_point)));
}

Fixed Fixed::operator++(int)
{
	Fixed f (*this);
	return (f);
}

Fixed Fixed::operator--(int) { return (Fixed (this->toFloat() - 1)); }

std::ostream& operator<<(std::ostream& os, const Fixed& f) { return (os << f.toFloat()); }

/* MEMBER FUNCTIONS */

int Fixed::getRawBits(void) const { return (this->fixed_point_value); }
void Fixed::setRawBits(int const raw) { this->fixed_point_value = raw;}

int Fixed::toInt(void) const { return (roundf(this->toFloat())); }
float Fixed::toFloat(void) const
{ return ((float)this->getRawBits() / (float)(1 << binary_point)); }
