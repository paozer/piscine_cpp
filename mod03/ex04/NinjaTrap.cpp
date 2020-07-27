#include "NinjaTrap.hpp"

/* CANONICAL FORM */
NinjaTrap::NinjaTrap() { std::cout << "Default NinjaTrap Constructor" << std::endl; }

NinjaTrap::NinjaTrap(const std::string& name) :
    ClapTrap(name, "NINJ4-TP", 60, 60, 120, 120, 1, 60, 5, 0)
{ std::cout << "String NinjaTrap Constructor" << std::endl; }

NinjaTrap::~NinjaTrap() { std::cout << "Default NinjaTrap Destructor" << std::endl; }

NinjaTrap::NinjaTrap(const NinjaTrap& other)
{
    std::cout << "Copy NinjaTrap Constructor" << std::endl;
    *this = other;
}

NinjaTrap& NinjaTrap::operator=(const NinjaTrap& other)
{
    std::cout << "Assignment NinjaTrap Operator" << std::endl;
    ClapTrap::operator=(other);
    return (*this);
}

/* MEMBER FUNCTIONS */
void NinjaTrap::ninjaShoebox(FragTrap& ft)
{
        std::cout << _model << " " << _name << " is scared of the FR4G-TP " << ft.getName()<< " and runs away.." << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap& nt)
{
    std::cout << "Knowing the ins and outs of the NINJ4-TP named " << nt.getName() << " the " << _model << " called " << _name << " inflicts " << 9000 << " damage on the target." << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap& st)
{
    std::cout << _model << " " << _name << " tries it's best and inflicts " << (rand() % 666) << " damage on the SC4V-TP named " << st.getName() << "." << std::endl;
}
