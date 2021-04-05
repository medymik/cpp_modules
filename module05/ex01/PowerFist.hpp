#ifndef POWERFIRST_HPP
# define POWERFIRST_HPP
# include "AWeapon.hpp"
class PowerFist : public AWeapon {
    private:
    public:
        PowerFist( void );
        PowerFist( PowerFist const & src );
        virtual ~PowerFist( void );

        PowerFist & operator=( PowerFist const & rhs );
        virtual void attack( void ) const;
};
#endif