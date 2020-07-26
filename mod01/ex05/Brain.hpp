#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class Brain
{
    public:
        Brain();
        const std::string identity() const;

    private:
        const int _neurons = 42;
};

#endif
