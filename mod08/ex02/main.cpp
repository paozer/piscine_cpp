#include "mutantStack.hpp"
#include <stack>
#include <iostream>

int main()
{
    {
        std::cout << "SUBJECT MAIN W/ MUTANTSTACK" << std::endl;
        mutantStack<int> mstack;

        mstack.push(5);
        mstack.push(17);

        std::cout << mstack.top() << std::endl;

        mstack.pop();

        std::cout << mstack.size() << std::endl;

        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        mutantStack<int>::iterator it = mstack.begin();
        mutantStack<int>::iterator ite = mstack.end();

        ++it;
        --it;
        while(it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
        std::cout << std::endl;
        std::stack<int> s (mstack);
        std::cout << "added tests on copy constructed std::stack from mutantStack" << std::endl;
        for (size_t i(s.size()); i > 0; --i) {
            std::cout << "s.top() before s.pop() " << s.top() << std::endl;
            s.pop();
        }
        std::cout << std::endl;
    }
    {
        std::cout << "MY MAIN W/ MUTANTSTACK<int>" << std::endl;
        mutantStack<int> *mstack = new mutantStack<int>();

        std::cout << "mstack.size() " << mstack->size() << std::endl;
        std::cout << "mstack.empty() " << std::boolalpha << mstack->empty() << std::endl;
        std::cout << std::endl;

        mstack->push(8);
        mstack->push(-313);
        mstack->push(-2);
        mstack->push(-97);

        for (mutantStack<int>::iterator it (mstack->begin()); it != mstack->end(); ++it)
            std::cout << *it << ",";
        std::cout << std::endl;

        mutantStack<int> copy (*mstack);
        std::cout << "copy constructed: ";
        for (mutantStack<int>::iterator it (copy.begin()); it != copy.end(); ++it)
            std::cout << *it << ",";

        std::cout << std::endl << std::endl;
        std::cout << "mstack->size() " << mstack->size() << std::endl;
        std::cout << "mstack->empty() " << std::boolalpha << mstack->empty() << std::endl;
        std::cout << std::endl;

        for (size_t i(mstack->size()); i > 0; --i) {
            std::cout << "mstack->top() before mstack->pop() " << mstack->top() << std::endl;
            mstack->pop();
        }
        delete mstack;
    }
    return 0;
}
