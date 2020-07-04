/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 19:41:28 by pramella          #+#    #+#             */
/*   Updated: 2020/06/26 19:41:29 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::binary_point = 8;

Fixed::Fixed() : fixed_point_value(0)
{ std::cout << "Default constructor called" << std::endl; }

Fixed::~Fixed()
{ std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	fixed_point_value = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Assignation constructor called" << std::endl;
	fixed_point_value = other.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function call" << std::endl;
	return fixed_point_value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function call" << std::endl;
	fixed_point_value = raw;
}
