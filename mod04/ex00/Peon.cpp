#include "Peon.hpp"

Peon::Peon(const std::string& name) : Victim(name) { std::cout << "Zog zog." << std::endl; }

Peon::~Peon() { std::cout << "Bleuark..." << std::endl; }

Peon::Peon(const Peon& other) : Victim(other.getName()) { *this = other; }

Peon& Peon::operator=(const Peon& other)
{
    Victim::operator=(other);
    return *this;
}

void Peon::getPolymorphed() const
{ std::cout << getName() << " has been turned into a pink pony!" << std::endl; }
