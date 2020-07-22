/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:27:30 by pramella          #+#    #+#             */
/*   Updated: 2020/07/09 22:27:30 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(const PowerFist& other) : AWeapon("Power Fist", 8, 50)
{ *this = other; }

PowerFist::~PowerFist() {}

PowerFist& PowerFist::operator=(const PowerFist& other)
{
    AWeapon::operator=(other);
    return (*this);
}

void PowerFist::attack() const { std::cout << "* pschhh... SBAM! *" << std::endl; }
