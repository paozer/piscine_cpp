/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 17:58:18 by pramella          #+#    #+#             */
/*   Updated: 2020/06/29 17:58:18 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* CONSTRUCTION & DESTRUCTION */

Fixed::Fixed() : fixed_point_value(0) {}

Fixed::Fixed(const int nb) : fixed_point_value(nb << binary_point) {}

Fixed::Fixed(const float nb) : fixed_point_value(roundf(nb * (1 << binary_point))) {}

Fixed::Fixed(const Fixed& other) { this->setRawBits(other.getRawBits()); }

Fixed::~Fixed() {}

/* OPERATOR OVERLOADS */

Fixed& Fixed::operator=(const Fixed& other)
{
	this->setRawBits(other.getRawBits());
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
	Fixed f;
	f.setRawBits(this->getRawBits() + other.getRawBits());
	return (f);
}
Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed f;
	f.setRawBits(this->getRawBits() - other.getRawBits());
	return (f);
}
Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed f;
	f.setRawBits((this->getRawBits() * other.getRawBits()) >> this->binary_point);
	return (f);
}
Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed f;
	f.setRawBits((this->getRawBits() / other.getRawBits()) << this->binary_point);
	return (f);
}

Fixed& Fixed::operator++()
{
	Fixed f (*this);
	Fixed temp = (*this + Fixed(1));
	this->setRawBits(temp.getRawBits());
	return (*this);
}

Fixed& Fixed::operator--()
{
	Fixed f (*this);
	Fixed temp = (*this - Fixed(1));
	this->setRawBits(temp.getRawBits());
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed f (*this);
	Fixed temp = (*this + Fixed(1));
	this->setRawBits(temp.getRawBits());
	return (f);
}

Fixed Fixed::operator--(int)
{
	Fixed f (*this);
	Fixed temp = (*this - Fixed(1));
	this->setRawBits(temp.getRawBits());
	return (f);
}

std::ostream& operator<<(std::ostream& os, const Fixed& f) { return (os << f.toFloat()); }

/* MEMBER FUNCTIONS */

int Fixed::getRawBits(void) const { return (this->fixed_point_value); }
void Fixed::setRawBits(int const raw) { this->fixed_point_value = raw;}

int Fixed::toInt(void) const { return (roundf(this->getRawBits() >> binary_point)); }
float Fixed::toFloat(void) const
{ return ((float)this->getRawBits() / (float)(1 << binary_point)); }

/* STATIC FUNCTIONS */

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b) {
		return (a);
	}
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b) {
		return (a);
	}
	return (b);
}

/* NON-MEMBER FUNCTIONS */
Fixed& min(Fixed& a, Fixed& b)
{
	if (a < b) {
		return (a);
	}
	return (b);
}

Fixed& max(Fixed& a, Fixed& b)
{
	if (a > b) {
		return (a);
	}
	return (b);
}
