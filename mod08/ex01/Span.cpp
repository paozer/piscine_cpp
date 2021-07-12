#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int max_size) : _max_size(max_size) {}

Span::~Span() {}

Span::Span(const Span& other) { *this = other; }

Span& Span::operator=(const Span& other)
{
    if (this != &other) {
        _max_size = other._max_size;
        _data = other._data;
    }
    return *this;
}

void Span::addNumber(int n)
{
    if (_data.size() == _max_size)
        throw std::exception();
    _data.push_back(n);
}

int Span::longestSpan() const
{
    if (_data.empty() || _data.size() == 1)
        throw std::exception();
    int max = *std::max_element(_data.begin(), _data.end());
    int min = *std::min_element(_data.begin(), _data.end());
    return abs(max - min);
}

int Span::shortestSpan() const
{
    if (_data.empty() || _data.size() == 1)
        throw std::exception();
    int shorty = INT_MAX;
    for (unsigned int i(0); i < _data.size(); ++i) {
        for (unsigned int j(i + 1); j < _data.size(); ++j) {
            if (abs(_data[i] - _data[j]) < shorty)
               shorty = abs(_data[i] - _data[j]);
        }
    }
    return shorty;
}
