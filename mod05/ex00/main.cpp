#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat* tom;

    try {
        tom = new Bureaucrat("tom", 314);
    }
    catch (std::exception& e) {
        std::cout << "[OK] caught grade 314 creation" << std::endl;
    }

    try {
        tom = new Bureaucrat("tom", 0);
    }
    catch (std::exception& e) {
        std::cout << "[OK] caught grade 0 creation" << std::endl;
    }

    try {
        tom = new Bureaucrat("tom", -999);
    }
    catch (Bureaucrat::GradeToHigh& e) {
        std::cout << "[OK] caught grade -999 creation" << std::endl;
    }

    try {
        tom = new Bureaucrat("tom", 1);
        std::cout << std::endl;
    }
    catch (Bureaucrat::GradeToHigh& e) {
        std::cout << "[ERROR] this shouldn't be displayed" << std::endl;
    }

    std::cout << *tom << std::endl;
    int i;
    for (i = 0; i < 200; ++i)
        --*tom;
    std::cout << "after " << i << " decrementation: " << *tom;
    for (i = 0; i < 200; ++i)
        ++*tom;
    std::cout << "after " << i << " incrementation: " << *tom;
    std::cout << std::endl;
    for (i = 0; i < 42; ++i)
        --*tom;
    std::cout << "after " << i << " decrementation: " << *tom;
    for (i = 0; i < 42; ++i)
        ++*tom;
    std::cout << "after " << i << " incrementation: " << *tom;
    delete tom;
    return (0);
}
