#include "Human.hpp"

void Human::meleeAttack(std::string const& target) { std::cout << "Melee attack on " << target << std::endl; }

void Human::rangedAttack(std::string const& target) { std::cout << "Ranged attack on " << target << std::endl; }

void Human::intimidatingShout(std::string const& target) { std::cout << "Intimidating shout towards " << target << std::endl; }

void Human::action(std::string const& action_name, std::string const& target)
{
    std::string action[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
    // typedef memFuncPtr is pointer to Human member function which takes cons string
    typedef void (Human::*memFuncPtr) (std::string const& target);
    memFuncPtr mfp[] = { &Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout };

    for (int i = 0; i < 3; ++i) {
        if (action_name == action[i]) {
            (this->*mfp[i]) (target);
            return ;
        }
    }
}
