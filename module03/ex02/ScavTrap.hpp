#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>

class ScavTrap {
    private:
        int _hitPoints;
        int _maxHitPoints;
        int _energyPoints;
        int _maxEnergyPoints;
        int _level;
        std::string _name;
        int _meleeAttackDamage;
        int _rangedAttackDamage;
        int _armorDamageReduction;
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
        ScavTrap( void );
        ScavTrap( ScavTrap const & src );
        ~ScavTrap( void );
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