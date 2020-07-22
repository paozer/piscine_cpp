#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other) { (void)other; }

Intern& Intern::operator=(const Intern& other) { (void)other; return (*this); }

Intern::~Intern() {}

Form* Intern::createRobotomyRequest(const std::string& target)
{ return (new RobotomyRequestForm(target)); }
Form* Intern::createShrubberyCreation(const std::string& target)
{ return (new ShrubberyCreationForm(target)); }
Form* Intern::createPresidentialPardon(const std::string& target)
{ return (new PresidentialPardonForm(target)); }

Form* Intern::makeForm(const std::string& type, const std::string& target)
{
    typedef Form* (Intern::*fct_ptr) (const std::string& type);
    static std::string form_type[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    fct_ptr arr[3] = {&Intern::createRobotomyRequest, &Intern::createShrubberyCreation, &Intern::createPresidentialPardon};

    for (int i = 0; i < 3; ++i) {
        if (type == form_type[i]) {
            std::cout << "Intern creates " << target << std::endl;
            return ((this->*arr[i]) (target));
        }
    }
    std::cout << type << " is unknow as a type of form" << std::endl;
    return (nullptr);
}
