#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>
class AWeapon {
    protected:
        std::string name;
        int apcost;
        int damage;
        AWeapon( void );
    public:
        // Canonical form
        AWeapon( AWeapon const & src );
        AWeapon & operator=( AWeapon const & rhs );
        AWeapon(std::string const & name, int apcost, int damage);
        virtual ~AWeapon( void );
        std::string const & getName( void ) const;
        int getAPCost( void ) const;
        int getDamage( void ) const;
        virtual void attack( void ) const = 0;
};
#endif