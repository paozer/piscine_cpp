#pragma once
#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>

#define STRING_SIZE 8

struct Data
{
    std::string s1;
    int n;
    std::string s2;
};

void * serialize();
Data * deserialize(void * raw);
void fillArrayRandAlnum(char * str, size_t len);

#endif
