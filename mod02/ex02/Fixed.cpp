#include "Fixed.hpp"

const int Fixed::binary_point = 8;

/* CONSTRUCTION & DESTRUCTION */

Fixed::Fixed() : _raw(0) {}

Fixed::Fixed(const int nb) : _raw(nb << binary_point) {}

Fixed::Fixed(const float nb) : _raw(roundf(nb * (1 << binary_point))) {}

Fixed::Fixed(const Fixed& other) { *this = other; }

Fixed::~Fixed() {}

/* OPERATOR OVERLOADS */

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        _raw = other._raw;
    return *this;
}

bool Fixed::operator<(const Fixed& other) const { return _raw < other._raw; }
bool Fixed::operator>(const Fixed& other) const { return _raw > other._raw; }
bool Fixed::operator>=(const Fixed& other) const { return _raw >= other._raw; }
bool Fixed::operator<=(const Fixed& other) const { return _raw <= other._raw; }
bool Fixed::operator==(const Fixed& other) const { return _raw == other._raw; }
bool Fixed::operator!=(const Fixed& other) const { return _raw != other._raw; }

Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed f;
    f._raw = (_raw + other._raw);
    return f;
}
Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed f;
    f._raw = (_raw - other._raw);
    return f;
}
Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed f;
    f._raw = (_raw * other._raw) >> binary_point;
    return f;
}
Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed f;
    f._raw = (_raw / other._raw) << binary_point;
    return f;
}

Fixed& Fixed::operator++()
{
    ++_raw;
    return *this;
}

Fixed& Fixed::operator--()
{
    --_raw;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed f (*this);
    ++_raw;
    return f;
}

Fixed Fixed::operator--(int)
{
    Fixed f (*this);
    --_raw;
    return f;
}

std::ostream& operator<<(std::ostream& os, const Fixed& f) { return os << f.toFloat(); }

/* MEMBER FUNCTIONS */

int Fixed::getRawBits() const { return _raw; }
void Fixed::setRawBits(int const raw) { _raw = raw;}

int Fixed::toInt() const { return roundf(getRawBits() >> binary_point); }
float Fixed::toFloat() const { return (float)getRawBits() / (float)(1 << binary_point); }

/* STATIC FUNCTIONS */

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return a;
    return b;
}

/* NON-MEMBER FUNCTIONS */
Fixed& min(Fixed& a, Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

Fixed& max(Fixed& a, Fixed& b)
{
    if (a > b)
        return a;
    return b;
}
