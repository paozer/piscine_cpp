#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
    public:
        PlasmaRifle();
        PlasmaRifle(const PlasmaRifle&);
        ~PlasmaRifle();
        PlasmaRifle &operator=(const PlasmaRifle&);

        virtual void attack() const;
};

#endif
