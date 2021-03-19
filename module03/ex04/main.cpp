#include <iostream>
#include "SuperTrap.hpp"

int     main( void ) {
    SuperTrap super("SUPERMAN");
    std::cout << "Attacks" << std::endl;
    super.meleeAttack("Hello");
    super.rangedAttack("Hayo");
    super.vaulthunter_dot_exe("special_sragtrap_attack");

    FragTrap trap("TRAPPY");
    ClapTrap clap("CLAPPY");
    NinjaTrap ninja("NINJO");
    ScavTrap scav("Scavy");

    super.ninjaShoeBox(trap);
    super.ninjaShoeBox(clap);
    super.ninjaShoeBox(ninja);
    super.ninjaShoeBox(scav);
    std::cout << "End of attacks" << std::endl;
    return 0;
}