/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 16:03:11 by pramella          #+#    #+#             */
/*   Updated: 2020/07/02 16:03:11 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* CANONICAL FORM */
ScavTrap::ScavTrap()
{ std::cout << "Default ScavTrap Constructor" << std::endl; }

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name, "SC4V-TP", 100, 100, 50, 50, 1, 20, 15, 3)
{ std::cout << "String ScavTrap Constructor" << std::endl; }

ScavTrap::~ScavTrap() { std::cout << "Default ScavTrap Destructor" << std::endl; }

ScavTrap::ScavTrap(const ScavTrap& other)
{
    std::cout << "Copy ScavTrap Constructor" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "Assignment ScavTrap Operator" << std::endl;
    ClapTrap::operator=(other);
    return (*this);
}

/* MEMBER FUNCTIONS */
void ScavTrap::challengeNewcomer(std::string const& target)
{
    int i;
    int random_damage;
    std::string challenge[5] = {"potato", "love", "ninja", "beer", "hacker"};

    if (_energy_points < 25) {
        std::cout << _model << " " << _name << " has not enough energy left to challenge anybody." << std::endl;
    }
    else {
        _energy_points -= 25;
        i = rand() % 5;
        random_damage = rand() % 100;
        std::cout << _model << " " << _name << " challenges the infamous " << target << " at the " << challenge[i] << " challenge, causing " << random_damage << " points of damage" << std::endl;
    }
}
