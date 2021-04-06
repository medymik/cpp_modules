#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Popo.hpp"

int     main( void ) {
    {
        Sorcerer robert("Robert", "the Magnificent");
        Victim jim("Jimmy");
        Peon joe("Joe");
        std::cout << robert << jim << joe;
        robert.polymorph(jim);
        robert.polymorph(joe);
    }
    {
        Sorcerer robert("Dod", "the walo");
        Popo p("PopMan");
        std::cout << p;
        robert.polymorph(p);
    }
    return 0;
}