#include "Zombie.hpp"

Zombie::Zombie() {}
Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {}

void Zombie::announce() { std::cout << _name << "\t(" << _type << ")\tBRAIIIIIIIIIIIINS"<< std::endl; }
