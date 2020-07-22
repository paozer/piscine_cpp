#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    {
        std::cout << "\t*** TESTS 1 ***" << std::endl;
        Bureaucrat* tom = new Bureaucrat("tom", 26);
        Form* pres = new PresidentialPardonForm("prisoner A");

        std::cout << *tom;
        std::cout << *pres;
        std::cout << std::endl;

        pres->signForm(*tom);
        std::cout << ++*tom;
        pres->signForm(*tom);
        tom->executeForm(*pres);
        for (int i = 0; i < 25; ++i)
            ++*tom;
        std::cout << *tom;
        tom->executeForm(*pres);

        delete tom;
        delete pres;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    {
        std::cout << "\t*** TESTS 2 ***" << std::endl;
        Bureaucrat* tom = new Bureaucrat("tom", 130);
        Form* shru  = new ShrubberyCreationForm("filename");

        std::cout << *tom;
        std::cout << *shru;
        std::cout << std::endl;

        shru->signForm(*tom);
        shru->signForm(*tom);
        tom->executeForm(*shru);
        tom->executeForm(*shru);
        tom->executeForm(*shru);

        delete tom;
        delete shru;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    {
        std::cout << "\t*** TESTS 3 ***" << std::endl;
        Bureaucrat* tom = new Bureaucrat("tom", 30);
        Form* toast = new RobotomyRequestForm("Toaster");
        Form* car  = new RobotomyRequestForm("Car");

        std::cout << *tom;
        std::cout << *toast;
        std::cout << *car;
        std::cout << std::endl;

        toast->signForm(*tom);
        car->signForm(*tom);
        tom->executeForm(*toast);
        tom->executeForm(*toast);
        tom->executeForm(*toast);
        tom->executeForm(*car);
        tom->executeForm(*car);
        tom->executeForm(*car);

        delete tom;
        delete toast;
        delete car;
    }
    return (0);
}
