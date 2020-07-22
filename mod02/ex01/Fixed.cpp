/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 17:11:27 by pramella          #+#    #+#             */
/*   Updated: 2020/06/29 17:58:15 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::binary_point = 8;

Fixed::Fixed() : fixed_point_value(0) {}

Fixed::Fixed(const int nb) : fixed_point_value(nb << binary_point) {}

Fixed::Fixed(const float nb) : fixed_point_value(roundf(nb * (1 << binary_point))) {}

Fixed::Fixed(const Fixed& other) { this->setRawBits(other.getRawBits()); }

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& other)
{
    this->setRawBits(other.getRawBits());
    return (*this);
}

int Fixed::getRawBits() const { return (fixed_point_value); }

void Fixed::setRawBits(int const raw) { fixed_point_value = raw;}

int Fixed::toInt() const { return (roundf(this->getRawBits() >> binary_point)); }

// undoes int constructor result
float Fixed::toFloat() const { return ((float)this->getRawBits() / (float)(1 << binary_point)); }

std::ostream& operator<<(std::ostream& os, const Fixed& f) { return (os << f.toFloat()); }
