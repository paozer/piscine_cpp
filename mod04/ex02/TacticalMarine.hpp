#pragma once
#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
    public:
        TacticalMarine();
        TacticalMarine(const TacticalMarine&);
        ~TacticalMarine();
        TacticalMarine &operator=(const TacticalMarine&);

        virtual ISpaceMarine* clone() const;
        virtual void battleCry() const;
        virtual void rangedAttack() const;
        virtual void meleeAttack() const;
};

#endif
