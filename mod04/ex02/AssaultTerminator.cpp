/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:27:59 by pramella          #+#    #+#             */
/*   Updated: 2020/07/09 22:28:00 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{ std::cout << "* teleports from space *" << std::endl; }

AssaultTerminator::~AssaultTerminator()
{ std::cout << "I’ll be back..." << std::endl; }

AssaultTerminator::AssaultTerminator(const AssaultTerminator& other)
{ *this = other; }

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator& other)
{ (void) other; return (*this); }

ISpaceMarine* AssaultTerminator::clone() const
{
	ISpaceMarine* clone = new AssaultTerminator();
	return (clone);
}

void AssaultTerminator::battleCry() const { std::cout << "This code is unclean. PURIFY IT!" << std::endl; }
void AssaultTerminator::rangedAttack() const { std::cout << "* does nothing *" << std::endl; }
void AssaultTerminator::meleeAttack() const { std::cout << "* attacks with chainfists *" << std::endl; }
