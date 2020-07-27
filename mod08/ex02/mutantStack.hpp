#pragma once
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iterator>
# include <deque>
# include <stack>

template <typename T, typename Container = std::deque<T> >
class mutantStack : public std::stack<T, Container>
{
    public:
        mutantStack() {}
        mutantStack(const mutantStack & other) { *this = other; }
        ~mutantStack() {}
        mutantStack & operator=(const mutantStack & other)
        {
            // in stack class definition c is the underlying container here deque
            if (this != &other)
                std::stack<T, Container>::c = other.std::stack<T, Container>::c;
            return (*this);
        }

        typedef typename Container::iterator iterator; // necessary for mutantStack<T>::iterator
        iterator begin() { return (std::stack<T, Container>::c.begin()); }
        iterator end() { return (std::stack<T, Container>::c.end()); }
};

#endif
