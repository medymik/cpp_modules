#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int    main( void ) {
    srand(time(NULL));

	{
		FragTrap p("Fragy");
		p.takeDamage(200);
		p.beRepaired(9);
		p.vaulthunter_dot_exe("Badass");
	}
	std::cout << "==== second ====" << std::endl;
	{
		ScavTrap p("Tox");
		p.takeDamage(500);
		p.beRepaired(9);
		p.challengeNewcomer();
		p.challengeNewcomer();
		p.challengeNewcomer();
	}
}