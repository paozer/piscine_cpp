#include "Character.hpp"

Character::Character()
{}

Character::Character(std::string name) :
	_name(name), _inventory_size(0),  _inventory(new AMateria*[4]()) {}

Character::~Character()
{}

Character::Character(const Character& other)
{
	*this = other;
}

Character& Character::operator=(const Character& other)
{
	(void)other;
	return (*this);
}

std::string const& Character::getName() const { return (_name); }

void Character::equip(AMateria* m)
{
	if (_inventory_size == 4 || m == nullptr) {
		return ;
	}
	int i = 0;
	while (i < 4 && _inventory[i]) {
		++i;
	}
	_inventory[i] = m;
	++_inventory_size;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > _inventory_size - 1) {
		return ;
	}
	_inventory[idx] = nullptr;
	--_inventory_size;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > _inventory_size - 1) {
		return ;
	}
	_inventory[idx]->use(target);
}
