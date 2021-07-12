#pragma once
#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{
    public:
        Victim(const std::string& name);
        Victim(const Victim&);
        virtual ~Victim();
        Victim &operator=(const Victim&);

        std::string getName() const;
        virtual void getPolymorphed() const;

    private:
        Victim();
        std::string _name;
        std::string _title;
};

std::ostream& operator<<(std::ostream& os, const Victim& s);

#endif
