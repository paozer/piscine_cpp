#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
    public:
        ZombieHorde(int n);
        ~ZombieHorde();
        void announce();

    private:
        Zombie* zb;
        int     len;
};

#endif
