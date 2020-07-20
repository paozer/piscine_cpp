#include "Serializer.hpp"

int main()
{
    srand(time(nullptr));
    void* raw = serialize();
    Data* clean = deserialize(raw);
    std::cout << "s1 = " << clean->s1 << std::endl;
    std::cout << "s2 = " << clean->s2 << std::endl;
    std::cout << "n  = " << clean->n << std::endl;
    return (0);
}
