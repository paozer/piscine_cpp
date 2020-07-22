#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("shrubberyCreation", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : Form("shrubberyCreation", 145, 137), _target(other._target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
        _target = other._target;
    return (*this);
}

void ShrubberyCreationForm::action() const
{
    static std::string tree[9] = {"       _-_", "    /~~   ~~\\", " /~~         ~~\\", "{               }", " \\  _-     -_  /", "   ~  \\\\ //  ~", "_- -   | | _- _", "  _ -  | |   -_", "      // \\\\"};
    std::ofstream of (_target + "_shrubbery", std::ios::out | std::ios::app);
    if (of.good()) {
        for (int i = 0; i < 18; ++i)
            of << tree[i % 9] << std::endl;
    }
}
