#pragma once
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
    public:
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm&);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm&);
        ~ShrubberyCreationForm();
        virtual void action() const;

    private:
        ShrubberyCreationForm();
        std::string _target;
};

#endif
