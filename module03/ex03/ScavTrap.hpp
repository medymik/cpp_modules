#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    private:
        ScavTrap( void );

    public:  
        // Canonical
        ScavTrap( ScavTrap const & src );
        virtual ~ScavTrap( void );
        ScavTrap & operator=( ScavTrap const & rhs );        
        // Name Parametre of constructor
        ScavTrap( std::string const & name );       
         // methods
        void    rangedAttack( std::string const & target );
        void    meleeAttack( std::string const & target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
        // random 5 attack
        // void    vaulthunter_dot_exe(std::string const & target);
        void    challengeNewcomer( void );
};
#endif