#pragma once
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{
	public:
		Character();
		Character(std::string name);
		Character(const Character&);
		virtual ~Character();
		Character &operator=(const Character&);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		int getIsize() { return (_inventory_size); }

	private:
		std::string _name;
		int _inventory_size;
		AMateria** _inventory;
};

#endif
