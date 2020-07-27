#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include <cstdlib> // rand(), srand()

class ScavTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap&);
        ~ScavTrap();
        ScavTrap &operator=(const ScavTrap&);
        void rangedAttack(std::string const& target) const;
        void meleeAttack(std::string const& target) const;
        void challengeNewcomer(std::string const& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    private:
        std::string _name;
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
