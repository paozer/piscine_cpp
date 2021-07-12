#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <cstdlib> // rand(), srand()
#include "ClapTrap.hpp" // inheritance

class FragTrap: public virtual ClapTrap
{
    public:
        FragTrap();
        FragTrap(const std::string& name);
        FragTrap(const FragTrap&);
        ~FragTrap();
        FragTrap& operator=(const FragTrap&);

        void vaulthunter_dot_exe(std::string const& target);
};

#endif
