#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
    public:
        SuperTrap();
        SuperTrap(const std::string& name);
        SuperTrap(const SuperTrap&);
        ~SuperTrap();
        SuperTrap &operator=(const SuperTrap&);

        void rangedAttack(const std::string& target);
        void meleeAttack(const std::string& target);
};

#endif
