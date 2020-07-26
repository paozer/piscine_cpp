#include "Fixed.hpp"

const int Fixed::_binary_point = 8;

Fixed::Fixed() : _raw(0) {}

Fixed::Fixed(const int nb) : _raw(nb << _binary_point) {}

Fixed::Fixed(const float nb) : _raw(roundf(nb * (1 << _binary_point))) {}

Fixed::Fixed(const Fixed& other) { *this = other; }

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        _raw = other._raw;
    return (*this);
}

int Fixed::getRawBits() const { return (_raw); }

void Fixed::setRawBits(int const raw) { _raw = raw;}

int Fixed::toInt() const { return (roundf(_raw >> _binary_point)); }

// undoes int constructor result
float Fixed::toFloat() const { return ((float)_raw / (float)(1 << _binary_point)); }

std::ostream& operator<<(std::ostream& os, const Fixed& f) { return (os << f.toFloat()); }
