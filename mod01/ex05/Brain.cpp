#include "Brain.hpp"

Brain::Brain() { (void)_neurons; }

const std::string Brain::identity(void) const
{
    std::ostringstream oss;
    oss << this;
    return oss.str();
}
