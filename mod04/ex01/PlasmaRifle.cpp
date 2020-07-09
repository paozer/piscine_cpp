/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 22:27:20 by pramella          #+#    #+#             */
/*   Updated: 2020/07/09 22:27:21 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() :
	AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& other) :
	AWeapon("Plasma Rifle", 5, 21)
{ *this = other; }

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle& other)
{
	AWeapon::operator=(other);
	return (*this);
}

void PlasmaRifle::attack() const { std::cout << "* piouuu piouuu piouuu *" << std::endl; }
