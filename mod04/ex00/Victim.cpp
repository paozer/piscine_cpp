/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 01:38:29 by pramella          #+#    #+#             */
/*   Updated: 2020/07/05 01:38:29 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(const std::string& name) : _name(name)
{ std::cout << "Some random victim called " << _name << " just appeared!" << std::endl; }

Victim::~Victim()
{ std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl; }

Victim::Victim(const Victim& other)
{ *this = other; }

Victim& Victim::operator=(const Victim& other)
{
	if (this != &other)
		_name = other._name;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Victim& v)
{
	os << "I'm " << v.getName() << " and I like otters!" << std::endl;
	return (os);
}

std::string Victim::getName() const { return (_name); }

void Victim::getPolymorphed() const
{ std::cout << _name << " has been turned into a cute little sheep!" << std::endl; }
