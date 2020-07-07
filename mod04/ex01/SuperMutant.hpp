#pragma once
#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
		SuperMutant();
		SuperMutant(const SuperMutant&);
		~SuperMutant();
		SuperMutant &operator=(const SuperMutant&);
		virtual void takeDamage(int);
};

#endif

