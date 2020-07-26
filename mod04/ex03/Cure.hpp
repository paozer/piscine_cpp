#pragma once
#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria
{
    public:
        Cure();
        Cure(const Cure&);
        ~Cure();
        Cure &operator=(const Cure&);

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif
