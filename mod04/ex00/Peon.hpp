#pragma once
#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon: public Victim
{
    public:
        Peon(const std::string& name);
        Peon(const Peon&);
        ~Peon();
        Peon &operator=(const Peon&);

        virtual void getPolymorphed() const;

    private:
        Peon();
};

#endif
