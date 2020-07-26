#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include "Zombie.hpp"
# include <iostream>
# include <cstdlib>

class ZombieEvent
{
    public:
        void    setZombieType(std::string type);
        Zombie* newZombie(std::string name);
        void    randomChump();

    private:
        std::string _type;
};

#endif
