#include "Serializer.hpp"

void* serialize()
{
    char * ret = new char[2 * STRING_SIZE + sizeof(int)];
    fillArrayRandAlnum(ret, STRING_SIZE);
    fillArrayRandAlnum(ret + STRING_SIZE + sizeof(int), STRING_SIZE);
    *(reinterpret_cast<int*>(ret + STRING_SIZE)) = rand();
    return (ret);
}

Data* deserialize(void * raw)
{
    Data * ret = new Data;
    ret->s1 = std::string (static_cast<char*>(raw), STRING_SIZE);
    ret->s2 = std::string (static_cast<char*>(raw) + STRING_SIZE + sizeof(int), STRING_SIZE);
    ret->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + STRING_SIZE);
    return (ret);
}

void fillArrayRandAlnum(char * str, size_t len)
{
    static const char alnum[] =
        "0123456789"
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (size_t i = 0; i < len; ++i)
        str[i] = alnum[rand() % (sizeof(alnum) - 1)];
}
