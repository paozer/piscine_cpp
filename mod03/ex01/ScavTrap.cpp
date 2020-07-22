/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 13:24:49 by pramella          #+#    #+#             */
/*   Updated: 2020/07/02 13:24:50 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* CANONICAL FORM */
ScavTrap::ScavTrap() :
    _hit_points(100), _max_hit_points(100), _energy_points(50),
    _max_energy_points(50), _level(1), _melee_attack_damage(20),
    _ranged_attack_damage(15), _armor_damage_reduction(3)
{ std::cout << "Default ScavTrap Constructor" << std::endl; }

ScavTrap::ScavTrap(const std::string& name) :
    _name(name), _hit_points(100), _max_hit_points(100),
    _energy_points(50), _max_energy_points(50), _level(1),
    _melee_attack_damage(20), _ranged_attack_damage(15),
    _armor_damage_reduction(3)
{ std::cout << "String ScavTrap Constructor" << std::endl; }

ScavTrap::~ScavTrap()
{ std::cout << "Default ScavTrap Destructor" << std::endl; }

ScavTrap::ScavTrap(const ScavTrap& other)
{
    std::cout << "ScavTrap Copy Constructor" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap Assignment Operator" << std::endl;
    if (this != &other) {
        _hit_points = other._hit_points;
        _max_hit_points = other._max_hit_points;
        _energy_points = other._energy_points;
        _max_energy_points = other._max_energy_points;
        _level = other._level;
        _name = other._name;
        _melee_attack_damage = other._melee_attack_damage;
        _ranged_attack_damage = other._ranged_attack_damage;
        _armor_damage_reduction = other._armor_damage_reduction;
    }
    return (*this);
}

/* MEMBER FUNCTIONS */
void ScavTrap::rangedAttack(std::string const& target) const
{
    std::cout << "SC4V-TP " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage" << std::endl;
}

void ScavTrap::meleeAttack(std::string const& target) const
{
    std::cout << "SC4V-TP " << _name << " attacks " << target << " in melee, causing " << _melee_attack_damage << " points of damage" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const& target)
{
    int i;
    int random_damage;
    std::string challenge[5] = {"potato", "love", "ninja", "beer", "hacker"};

    if (_energy_points < 25) {
        std::cout << "SC4V-TP " << _name << " has not enough energy left to challenge anybody." << std::endl;
    }
    else {
        _energy_points -= 25;
        i = rand() % 5;
        random_damage = rand() % 100;
        std::cout << "SC4V-TP " << _name << " challenges the infamous " << target << " at the " << challenge[i] << " challenge, causing " << random_damage << " points of damage" << std::endl;
    }
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (_armor_damage_reduction > amount) {
        amount = 0;
    }
    else {
        amount -= _armor_damage_reduction;
    }
    if (amount > _hit_points) {
        _hit_points = 0;
    }
    else {
        _hit_points -= amount;
    }
    std::cout << "After taking damage SC4V-TP " << _name << " has " << _hit_points << " HP!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (_hit_points + amount > _max_hit_points) {
        _hit_points = _max_hit_points;
    }
    else {
        _hit_points += amount;
    }
    std::cout << "After being repaired SC4V-TP " << _name << " has " << _hit_points << " HP!" << std::endl;
}
