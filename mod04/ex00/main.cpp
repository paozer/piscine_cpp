#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
    std::cout << "########## SUBJECT MAIN ##########" << std::endl;
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
    std::cout << std::endl;

    std::cout << "##########   MY  MAIN   ##########" << std::endl;
    Victim* duke = new Peon("duke");
    std::cout << *duke;
    robert.polymorph(*duke);
    std::cout << std::endl;

    delete duke;
    return 0;
}
