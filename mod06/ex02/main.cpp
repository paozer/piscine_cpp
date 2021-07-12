#include "Base.hpp"
#include <iostream>

void identify_from_pointer(Base * p)
{
    if (Base *b = dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (Base* b = dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (Base* b = dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify_from_reference(Base & p)
{
    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
        return ;
    }
    catch (std::bad_cast& e) {}

    try {
        B& b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)b;
        return ;
    }
    catch (std::bad_cast& e) {}

    try {
        C& c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)c;
        return ;
    }
    catch (std::bad_cast& e) {}
}

int main()
{
    A a;
    B b;
    C c;
    Base base;

    std::cout << "> identify_from_pointer tests" << std::endl;
    std::cout << "> should print A, B, C and nothing" << std::endl;
    identify_from_pointer(&a);
    identify_from_pointer(&b);
    identify_from_pointer(&c);
    identify_from_pointer(&base);
    std::cout << std::endl;

    std::cout << "> identify_from_reference tests" << std::endl;
    std::cout << "> should print A, B, C and nothing" << std::endl;
    identify_from_reference(a);
    identify_from_reference(b);
    identify_from_reference(c);
    identify_from_reference(base);

    return 0;
}
