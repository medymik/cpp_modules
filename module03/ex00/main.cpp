#include "FragTrap.hpp"

int     main( void ) {
    srand(time(NULL));
    FragTrap p("Tox");
    p.takeDamage(500);
    p.beRepaired(9);
    p.vaulthunter_dot_exe("Hold on");
    p.vaulthunter_dot_exe("Hold on");
    p.vaulthunter_dot_exe("Hold on");
    p.vaulthunter_dot_exe("Hold on");
    p.vaulthunter_dot_exe("Hold on");
    p.setEnergyPoints(500);
    std::cout << p.getHitPoints() << std::endl;
    std::cout << p.getEnergyPoints() << std::endl;
}