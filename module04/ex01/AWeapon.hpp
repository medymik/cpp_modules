#ifndef AWEAPON_HPP
# define AWEAPON_HPP
#include <iostream>

class AWeapon {
    private:
        std::string _name;
        int         _apcost;
        int         _damage;
    public:
        AWeapon( std::string const & name, int apcost, int damage);
        AWeapon( void );
        virtual ~AWeapon( void );
        std::string virtual getName() const;
        int getAPCost( void ) const;
        int getDamage( void ) const;
        virtual void attack( void ) const = 0;
};

#endif