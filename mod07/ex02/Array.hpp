#pragma once
#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template <typename T>
class Array
{
	public:
		Array(unsigned int size = 0) :
            _size(size),
            _data(_size ? new T[_size] : nullptr)
        {
            for (unsigned int i(0); i < _size; ++i)
                _data[i] = 0;
        }

		~Array() { delete[] _data; };
		Array(const Array & other) : _data(nullptr) { *this = other; }

		Array &operator=(const Array & other)
        {
            if (this != &other) {
                delete[] _data;
                _size = other._size;
                _data = new T[_size];
                for (unsigned int i(0); i < _size; ++i)
                    _data[i] = other._data[i];
            }
            return (*this);
        }

        T &operator[](size_t i)
        {
            if (indexIsOutOfRange(i))
                throw std::out_of_range("index out_of_range");
            return (_data[i]);
        }

        unsigned int size() const { return (_size); }

	private:
        unsigned int _size;
        T *_data;

        bool indexIsOutOfRange(unsigned int i) { return (i < 0 || _size <= i); }
};

#endif
