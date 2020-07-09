#pragma once
#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice&);
		~Ice();
		Ice &operator=(const Ice&);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

	private:
};

#endif
