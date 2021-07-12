#pragma once
#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{
    public:
        AWeapon();
        AWeapon(const std::string& name, int apcost, int damage);
        AWeapon(const AWeapon&);
        virtual ~AWeapon();
        AWeapon &operator=(const AWeapon&);

        std::string virtual getName() const;
        int getDamage() const;
        int getAPCost() const;
        virtual void attack() const = 0;

    private:
        std::string _name;
        int _damage;
        int _ap_cost;
};

#endif

