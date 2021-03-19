#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
    private:

    public: 
        // Canonical
        FragTrap( void );
        FragTrap( FragTrap const & src );
        virtual ~FragTrap( void );
        FragTrap & operator=( FragTrap const & rhs );        
        // Name Parametre of constructor
        FragTrap( std::string const & name );       
         // methods
        void    rangedAttack( std::string const & target );
        void    meleeAttack( std::string const & target );
        virtual void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
        // random 5 attack
        void    vaulthunter_dot_exe(std::string const & target);
};
#endif