#include "Human.hpp"

const Brain& Human::getBrain() { return _brain; }
std::string Human::identity() { return _brain.identity(); }
