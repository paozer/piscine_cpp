#pragma once
#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <iomanip> // std::fixed, std::setprecision
#include <climits> // INT_MAX, INT_MIN
#include <cmath> // HUGE_VAL
#include <cstring> // strlen

class Convert
{
    public:
        Convert(const char * input);
        Convert(const Convert &);
        ~Convert();
        Convert &operator=(const Convert &);
        void toChar() const;
        void toInt() const;
        void toFloat() const;
        void toDouble() const;
        void validateStrtodConversion(const char * input, const char * end);

    private:
        Convert();
        double _conversion;
        bool _conversion_error_flag;
};

#endif
