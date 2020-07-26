#pragma once
#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <climits>
# include <cstdlib>
# include <vector>

class Span
{
	public:
		Span(unsigned int size);
		Span(const Span&);
		~Span();
		Span &operator=(const Span&);

        void addNumber(int);
        int shortestSpan() const;
        int longestSpan() const;

        template <typename Iterator>
        void addNumber(Iterator it, Iterator et)
        {
            for (; it != et; ++it) {
                if (_data.size() == _max_size)
                    throw std::exception();
                _data.push_back(*it);
            }
        }

	private:
		Span();
        unsigned int _max_size;
        std::vector<int> _data;
};

#endif

