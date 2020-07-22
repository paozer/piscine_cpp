#pragma once
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
    public:
        PresidentialPardonForm(const std::string& target);
        PresidentialPardonForm(const PresidentialPardonForm&);
        PresidentialPardonForm &operator=(const PresidentialPardonForm&);
        ~PresidentialPardonForm();
        virtual void action() const;

    private:
        PresidentialPardonForm();
        std::string _target;
};

#endif
