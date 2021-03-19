#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
    private:

    public: 
        // Canonical
        NinjaTrap( void );
        NinjaTrap( NinjaTrap const & src );
        virtual ~NinjaTrap( void );
        NinjaTrap & operator=( NinjaTrap const & rhs );        
        // Name Parametre of constructor
        NinjaTrap( std::string const & name );       
         // methods
        void    rangedAttack( std::string const & target );
        void    meleeAttack( std::string const & target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );

        // special case of ninja trap
        void    ninjaShoeBox(FragTrap const & target);
        void    ninjaShoeBox(ClapTrap const & target);
        void    ninjaShoeBox(ScavTrap const & target);
        void    ninjaShoeBox(NinjaTrap const & target);
};
#endif