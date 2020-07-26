#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
    {
        std::cout << "\t### SUBJECT MAIN & EASY TESTS" << std::endl;
        ISpaceMarine* bob = new TacticalMarine;
        ISpaceMarine* jim = new AssaultTerminator;

        ISquad* vlc = new Squad;

        vlc->push(bob);
        vlc->push(jim);
        for (int i = 0; i < vlc->getCount(); ++i)
        {
            ISpaceMarine* cur = vlc->getUnit(i);
            cur->battleCry();
            cur->rangedAttack();
            cur->meleeAttack();
        }
        std::cout << "push duplicate >> oldsize[" << vlc->getCount() << "] newsize[" << vlc->push(bob) << "]" << std::endl;
        std::cout << "push nullptr >> oldsize[" << vlc->getCount() << "] newsize[" << vlc->push(nullptr) << "]" << std::endl;
        delete vlc;
    }
    {
        std::cout << std::endl << "\t### COPY CONSTRUCTOR TESTS (DEEP COPY)" << std::endl;
        ISpaceMarine* bob = new TacticalMarine;
        ISpaceMarine* jim = new AssaultTerminator;

        Squad* vlc = new Squad;
        vlc->push(bob);
        vlc->push(jim);
        Squad* vlc2 = new Squad(*vlc);
        for (int i = 0; i < vlc->getCount(); ++i){
            ISpaceMarine* cur = vlc2->getUnit(i);
            cur->battleCry();
            cur->rangedAttack();
            cur->meleeAttack();
        }
        delete vlc;
        delete vlc2;
    }
    {
        std::cout << std::endl << "\t### ASSIGNATION TESTS (DEEP COPY)" << std::endl;
        ISpaceMarine* bob = new TacticalMarine;
        ISpaceMarine* jim = new AssaultTerminator;
        ISpaceMarine* tom = new TacticalMarine;
        ISpaceMarine* john = new AssaultTerminator;

        Squad* vlc = new Squad;
        Squad* vlc2 = new Squad;
        vlc->push(bob);
        vlc->push(jim);
        vlc2->push(tom);
        vlc2->push(john);
        *vlc = *vlc2;
        for (int i = 0; i < vlc->getCount(); ++i){
            ISpaceMarine* cur = vlc2->getUnit(i);
            cur->battleCry();
            cur->rangedAttack();
            cur->meleeAttack();
        }
        delete vlc;
        delete vlc2;
    }
    return 0;
}
