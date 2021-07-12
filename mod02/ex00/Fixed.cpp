#include "Fixed.hpp"

const int Fixed::_binary_point = 8;

Fixed::Fixed() : _raw(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Assignation constructor called" << std::endl;
    if (this != &other)
        _raw = other._raw;
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function call" << std::endl;
    return _raw;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function call" << std::endl;
    _raw = raw;
}
