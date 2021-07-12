#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("presidentialPardon", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) :
    Form("presidentialPardon", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :
    Form("presidentialPardon", 25, 5), _target(other._target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != &other)
        _target = other._target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::action() const
{ std::cout << _target << " was pardoned by Zafod Beeblebrox." << std::endl; }
