#include "Convert.hpp"

Convert::Convert(const char * input) : _conversion_error_flag(false)
{
    char * end;

    _conversion = std::strtod(input, &end);
    validateStrtodConversion(input, end);
}

Convert::~Convert() {}

Convert::Convert(const Convert & other) { *this = other; }

Convert& Convert::operator=(const Convert & other)
{
    if (this != &other) {
        _conversion = other._conversion;
        _conversion_error_flag = other._conversion_error_flag;
    }
    return (*this);
}

void Convert::toChar() const
{
    std::cout << "char: ";
    if (_conversion < 0 || 127 < _conversion || _conversion_error_flag)
        std::cout << "impossible" << std::endl;
    else if (!std::isprint(_conversion))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(_conversion) << "'" << std::endl;
}

void Convert::toInt() const
{
    std::cout << "int: ";
    if (_conversion < INT_MIN || INT_MAX < _conversion || _conversion_error_flag)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(_conversion) << std::endl;
}

void Convert::toDouble() const
{
    std::cout << "double: ";
    if (_conversion_error_flag)
        std::cout << "impossible" << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1) << _conversion << std::endl;
}

void Convert::toFloat() const
{
    std::cout << "float: ";
    if (_conversion_error_flag)
        std::cout << "impossible" << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1) << static_cast<float>(_conversion) << "f" << std::endl;
}

void Convert::validateStrtodConversion(const char * input, const char * end)
{
    // if no conversion could be made
    // check if char literal input
    if (_conversion == 0 && end == input) {
        if (strlen(input) == 1)
            _conversion = static_cast<double>(input[0]);
        else if (strlen(input) == 3 && input[0] == '\'' && input[2] == '\'')
            _conversion = static_cast<double>(input[1]);
        else
            _conversion_error_flag = true;
    }
    // if input out of double range
    if (_conversion == HUGE_VAL)
        _conversion_error_flag = true;
}
