#pragma once
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <typename T>
bool easyfind(T container, int n)
{
    return (std::find(container.begin(), container.end(), n) != container.end());
}

#endif
