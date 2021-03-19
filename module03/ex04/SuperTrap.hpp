#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap {
    private:

    public: 
        // Canonical
        SuperTrap( void );
        SuperTrap( SuperTrap const & src );
        virtual ~SuperTrap( void );
        SuperTrap & operator=( SuperTrap const & rhs );        
        // Name Parametre of constructor
        SuperTrap( std::string const & name );       
         // methods
        void    rangedAttack( std::string const & target );
        void    meleeAttack( std::string const & target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
};

#endif