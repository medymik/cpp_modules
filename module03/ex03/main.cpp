#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"

int     main( void ) {
    FragTrap trap("TRAPPY");
    ClapTrap clap("CLAPPY");
    NinjaTrap ninja("NINJO");
    ScavTrap scav("Scavy");

    ninja.ninjaShoeBox(trap);
    ninja.ninjaShoeBox(clap);
    ninja.ninjaShoeBox(ninja);
    ninja.ninjaShoeBox(scav);
    return 0;
}