/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 01:38:13 by pramella          #+#    #+#             */
/*   Updated: 2020/07/05 01:38:14 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(const std::string& name) :
	Victim(name)
{ std::cout << "Zog zog." << std::endl; }

Peon::~Peon()
{ std::cout << "Bleuark..." << std::endl; }

Peon::Peon(const Peon& other) :
	Victim(other.getName())
{ *this = other; }

Peon& Peon::operator=(const Peon& other)
{
	Victim::operator=(other);
	return (*this);
}

void Peon::getPolymorphed() const
{ std::cout << getName() << " has been turned into a pink pony!" << std::endl; }
