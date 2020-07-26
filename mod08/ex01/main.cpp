#include "Span.hpp"

int main()
{
    {
        std::cout << "SUBJECTS MAIN" << std::endl;
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << std::endl;
    }
    {
        std::cout << "MY MAIN" << std::endl;
        Span sp = Span(0);
        try {
            sp.addNumber(21);
        }
        catch (const std::exception & e) {
            std::cout << "adding number on a Span(0) throwed" << std::endl;
        }
        try {
            sp.shortestSpan();
        }
        catch (const std::exception & e) {
            std::cout << "shortestSpan() on a Span(0) throwed" << std::endl;
        }
        try {
            sp.longestSpan();
        }
        catch (const std::exception & e) {
            std::cout << "longestSpan() on a Span(0) throwed" << std::endl;
        }
        std::cout << std::endl;
    }
    {
        Span sp = Span(10);

        for (int i(0); i < 11; ++i) {
            try {
                sp.addNumber(i);
                std::cout << "added " << i << " to Span(10)" << std::endl;
            }
            catch (const std::exception & e) {
                std::cout << "adding " << i << " to Span(10) throwed" << std::endl;
            }
        }
        std::cout << std::endl;
    }
    {
        Span sp = Span(5);
        sp.addNumber(-42);
        try {
            sp.shortestSpan();
        }
        catch (const std::exception & e) {
            std::cout << "shortestSpan() on a Span with one number throwed" << std::endl;
        }
        std::cout << std::endl;
        sp.addNumber(9);
        sp.addNumber(3);
        sp.addNumber(200);
        std::cout << "span(5) = -42, 9, 3, 200" << std::endl;
        std::cout << "longestSpan() = " << sp.longestSpan() << std::endl;
        std::cout << "shortestSpan() = " << sp.shortestSpan() << std::endl;
        std::cout << std::endl;

        int myinput;
        std::cout << "input a number > ";
        std::cin >> myinput;
        sp.addNumber(myinput);
        std::cout << "span(5) = -42, 9, 3, 200, " << myinput << std::endl;
        std::cout << "longestSpan() = " << sp.longestSpan() << std::endl;
        std::cout << "shortestSpan() = " << sp.shortestSpan() << std::endl;
        std::cout << std::endl;
    }
    {
        std::cout << "10000 Numbers TEST" << std::endl;
        Span sp (10000);
        for (int i(0); i < 10000; ++i)
            sp.addNumber(i);
        std::cout << "sp = 0, 1, 2, ... 9999" << std::endl;
        std::cout << "longestSpan() = " << sp.longestSpan() << std::endl;
        std::cout << "shortestSpan() = " << sp.shortestSpan() << std::endl;
    }
}
