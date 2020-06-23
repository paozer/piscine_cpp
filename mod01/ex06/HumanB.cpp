/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 05:47:47 by pramella          #+#    #+#             */
/*   Updated: 2020/06/23 05:47:48 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

void HumanB::setWeapon(Weapon& weapon) { _weapon = &weapon; }

void HumanB::attack(void)
{
	std::cout << _name << " attacks with " << _weapon->getType() << std::endl;
}
