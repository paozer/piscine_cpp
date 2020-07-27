#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include <cstdlib> // rand(), srand()
# include "ClapTrap.hpp" // inheritance

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap&);
        ~ScavTrap();
        ScavTrap& operator=(const ScavTrap&);

        void challengeNewcomer(std::string const& target);
};

#endif
