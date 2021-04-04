#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
    private:
        std::string name;
        int ap;
        AWeapon* weapon;
        Character( void );
    public:
        Character( std::string const & name );
        void    recoverAP( void );
        void    attack(Enemy* enemy);
        void    equip(AWeapon *);
        Character & operator=( Character const & rhs );
        std::string const & getName( void ) const;
        AWeapon* const getWeapon( void ) const;
        int getAp( void ) const;
};

std::ostream & operator<<( std::ostream & o, Character const & rhs );
#endif