#pragma once
#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
    public:
        AssaultTerminator();
        AssaultTerminator(const AssaultTerminator&);
        ~AssaultTerminator();
        AssaultTerminator &operator=(const AssaultTerminator&);

        virtual ISpaceMarine* clone() const;
        virtual void battleCry() const;
        virtual void rangedAttack() const;
        virtual void meleeAttack() const;

    private:
};

#endif
