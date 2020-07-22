/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 16:02:59 by pramella          #+#    #+#             */
/*   Updated: 2020/07/02 16:03:00 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{ std::cout << "Default ClapTrap Constructor" << std::endl; }

ClapTrap::ClapTrap(const std::string& name, const std::string& model, unsigned int hit_points,
                unsigned int max_hit_points, unsigned int energy_points,
                unsigned int max_energy_points, unsigned int level,
                unsigned int melee_attack_damage, unsigned int ranged_attack_damage,
                unsigned int armor_damage_reduction) :
    _name(name), _model(model), _hit_points(hit_points), _max_hit_points(max_hit_points),
    _energy_points(energy_points), _max_energy_points(max_energy_points), _level(level),
    _melee_attack_damage(melee_attack_damage), _ranged_attack_damage(ranged_attack_damage),
    _armor_damage_reduction(armor_damage_reduction)
{ std::cout << "Arguments ClapTrap Constructor" << std::endl; }

ClapTrap::~ClapTrap()
{ std::cout << "Default ClapTrap Destructor" << std::endl; }

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy ClapTrap Constructor" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Assignment ClapTrap Operator" << std::endl;
    if (this != &other) {
        _hit_points = other._hit_points;
        _max_hit_points = other._max_hit_points;
        _energy_points = other._energy_points;
        _max_energy_points = other._max_energy_points;
        _level = other._level;
        _name = other._name;
        _model = other._model;
        _melee_attack_damage = other._melee_attack_damage;
        _ranged_attack_damage = other._ranged_attack_damage;
        _armor_damage_reduction = other._armor_damage_reduction;
    }
    return (*this);
}

/* MEMBER FUNCTIONS */
void ClapTrap::rangedAttack(std::string const& target) const
{
    std::cout << _model << " " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage" << std::endl;
}

void ClapTrap::meleeAttack(std::string const& target) const
{
    std::cout << _model << " " << _name << " attacks " << target << " in melee, causing " << _melee_attack_damage << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
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
    std::cout << "After taking damage " << _model << " " << _name << " has " << _hit_points << " HP!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hit_points + amount > _max_hit_points) {
        _hit_points = _max_hit_points;
    }
    else {
        _hit_points += amount;
    }
    std::cout << "After being repaired " << _model << " " << _name << " has " << _hit_points << " HP!" << std::endl;
}
