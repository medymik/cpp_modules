#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {

    protected:
        int _hitPoints;
        int _maxHitPoints;
        int _energyPoints;
        int _maxEnergyPoints;
        int _level;
        std::string _name;
        int _meleeAttackDamage;
        int _rangedAttackDamage;
        int _armorDamageReduction;
        ClapTrap( void );

    public:
        // Getters
        int getHitPoints( void ) const;
        int getMaxHitPoints( void ) const;
        int getEnergyPoints( void ) const;
        int getMaxEnergyPoints( void ) const;
        int getLevel( void ) const;
        int getMeleeAttackDamage( void ) const;
        int getRangedAttackDamage( void ) const;
        int getArmorDamageReduction( void ) const;
        std::string getName( void ) const;
        // Setters
        void setHitPoints( int val );
        void setMaxHitPoints( int val );
        void setEnergyPoints( int val );
        void setMaxEnergyPoints( int val );
        void setLevel( int val );
        void setMeleeAttackDamage( int val );
        void setRangedAttackDamage( int val );
        void setArmorDamageReduction( int val );
        void setName( std::string val );

        // Canonical
        ClapTrap( ClapTrap const & src );
        virtual ~ClapTrap( void );
        ClapTrap & operator=( ClapTrap const & rhs );  

        // Name Parametre of constructor
        ClapTrap( std::string const & name );       
         // methods
        virtual void    rangedAttack( std::string const & target );
        virtual void    meleeAttack( std::string const & target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
};
#endif