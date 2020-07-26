#include "AWeapon.hpp"

AWeapon::AWeapon() {}

AWeapon::AWeapon(const std::string& name, int apcost, int damage) :
    _name(name), _damage(damage), _ap_cost(apcost) {}

AWeapon::~AWeapon() {}

AWeapon::AWeapon(const AWeapon& other) { *this = other; }

AWeapon& AWeapon::operator=(const AWeapon& other)
{
    if (this != &other) {
        _name = other._name;
        _damage = other._damage;
        _ap_cost = other._ap_cost;
    }
    return (*this);
}

std::string AWeapon::getName() const { return (_name); }
int AWeapon::getDamage() const { return (_damage); }
int AWeapon::getAPCost() const { return (_ap_cost); }
