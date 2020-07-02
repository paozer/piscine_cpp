/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 13:24:41 by pramella          #+#    #+#             */
/*   Updated: 2020/07/02 13:24:41 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* CANONICAL FORM */
FragTrap::FragTrap() :
	_hit_points(100), _max_hit_points(100), _energy_points(100),
	_max_energy_points(100), _level(1), _melee_attack_damage(30),
	_ranged_attack_damage(20), _armor_damage_reduction(5)
{ std::cout << "Default FragTrap Constructor" << std::endl; }

FragTrap::FragTrap(std::string name) :
	_name(name), _hit_points(100), _max_hit_points(100),
	_energy_points(100), _max_energy_points(100), _level(1),
	_melee_attack_damage(30), _ranged_attack_damage(20),
	_armor_damage_reduction(5)
{ std::cout << "String FragTrap Constructor" << std::endl; }

FragTrap::~FragTrap() { std::cout << "Default FragTrap Destructor" << std::endl; }

FragTrap::FragTrap(const FragTrap& other)
{
	std::cout << "Copy FragTrap Constructor" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "Assignment FragTrap Operator" << std::endl;
	_hit_points = other._hit_points;
	_max_hit_points = other._max_hit_points;
	_energy_points = other._energy_points;
	_max_energy_points = other._max_energy_points;
	_level = other._level;
	_name = other._name;
	_melee_attack_damage = other._melee_attack_damage;
	_ranged_attack_damage = other._ranged_attack_damage;
	_armor_damage_reduction = other._armor_damage_reduction;
	return (*this);
}

/* MEMBER FUNCTIONS */
void FragTrap::rangedAttack(std::string const& target)
{
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage" << std::endl;
}

void FragTrap::meleeAttack(std::string const& target)
{
	std::cout << "FR4G-TP " << _name << " attacks " << target << " in melee, causing " << _melee_attack_damage << " points of damage" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const& target)
{
	int i;
	int random_damage;
	std::string attack[5] = {"potato", "love", "ninja", "beer", "hacker"};

	if (_energy_points < 25) {
		std::cout << "There is not enough energy left for the vaulthunter_dot_exe attack." << std::endl;
	}
	else {
		_energy_points -= 25;
		i = rand() % 5;
		random_damage = rand() % 100;
		std::cout << "FR4G-TP " << _name << " executes a " << attack[i] << " attack on " << target << " causing " << random_damage << " points of damage" << std::endl;
	}
}

void FragTrap::takeDamage(unsigned int amount)
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
	std::cout << "After taking damage FR4G-TP " << _name << " has " << _hit_points << " HP!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (_hit_points + amount > _max_hit_points) {
		_hit_points = _max_hit_points;
	}
	else {
		_hit_points += amount;
	}
	std::cout << "After being repaired FR4G-TP " << _name << " has " << _hit_points << " HP!" << std::endl;
}
