/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 16:03:02 by pramella          #+#    #+#             */
/*   Updated: 2020/07/02 16:03:03 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(const std::string& name, const std::string& model, unsigned int hit_points,
                unsigned int max_hit_points, unsigned int energy_points,
                unsigned int max_energy_points, unsigned int level,
                unsigned int melee_attack_damage, unsigned int ranged_attack_damage,
                unsigned int armor_damage_reduction);
        ClapTrap(const ClapTrap&);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap&);

        void rangedAttack(std::string const& target) const;
        void meleeAttack(std::string const& target) const;
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    protected:
        std::string _name;
        std::string _model;
        unsigned int _hit_points;
        unsigned int _max_hit_points;
        unsigned int _energy_points;
        unsigned int _max_energy_points;
        unsigned int _level;
        unsigned int _melee_attack_damage;
        unsigned int _ranged_attack_damage;
        unsigned int _armor_damage_reduction;
};

#endif

