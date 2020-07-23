#include "easyfind.hpp"
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>

int main()
{
    srand(time(nullptr));
    {
        std::vector<int> v;

        for (int i(0); i < 6; ++i)
            v.push_back(rand() % 4);
        std::cout << "vector tests" << std::endl;
        for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
            std::cout << *it << ",";
        std::cout << std::endl << std::endl;
        std::cout << std::boolalpha << "easyfind(0) " << easyfind(v, 0) << std::endl;
        std::cout << std::boolalpha << "easyfind(1) " << easyfind(v, 1) << std::endl;
        std::cout << std::boolalpha << "easyfind(2) " << easyfind(v, 2) << std::endl;
        std::cout << std::boolalpha << "easyfind(3) " << easyfind(v, 3) << std::endl;
        std::cout << std::boolalpha << "easyfind(4) " << easyfind(v, 4) << std::endl;
        std::cout << std::boolalpha << "easyfind(5) " << easyfind(v, 5) << std::endl;
        std::cout << std::endl;
    }
    {
        std::vector<int> v;

        std::cout << "empty vector tests" << std::endl << std::endl;
        std::cout << std::boolalpha << "easyfind(0) " << easyfind(v, 0) << std::endl;
        std::cout << std::boolalpha << "easyfind(1) " << easyfind(v, 1) << std::endl;
        std::cout << std::boolalpha << "easyfind(2) " << easyfind(v, 2) << std::endl;
        std::cout << std::boolalpha << "easyfind(3) " << easyfind(v, 3) << std::endl;
        std::cout << std::boolalpha << "easyfind(4) " << easyfind(v, 4) << std::endl;
        std::cout << std::boolalpha << "easyfind(5) " << easyfind(v, 5) << std::endl;
        std::cout << std::endl;
    }
    {
        std::list<int> l;
        l.push_front(90);
        l.push_front(54);
        l.push_back(0);
        l.push_back(-531958);
        l.push_front(93587);

        std::cout << "list tests" << std::endl;
        for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it)
            std::cout << *it << ",";
        std::cout << std::endl << std::endl;
        std::cout << std::boolalpha << "easyfind(0) " << easyfind(l, 0) << std::endl;
        std::cout << std::boolalpha << "easyfind(-54) " << easyfind(l, -54) << std::endl;
        std::cout << std::boolalpha << "easyfind(54) " << easyfind(l, 54) << std::endl;
        std::cout << std::boolalpha << "easyfind(93587) " << easyfind(l, 93587) << std::endl;
    }
    return (0);
}
