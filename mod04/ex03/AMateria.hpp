#pragma once
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter; // forward declaration

class AMateria
{
	public:
		AMateria();
		AMateria(const std::string & type);
		AMateria(const AMateria&);
		virtual ~AMateria();
		AMateria &operator=(const AMateria&);

		std::string const& getType() const;
		unsigned int getXP() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		void updateXp();

	private:
		unsigned int _xp;
		std::string _type;
};

#endif
