#ifndef POWERFIRST_HPP
# define POWERFIRST_HPP
# include "AWeapon.hpp"
class PowerFirst : public AWeapon {
    private:
    public:
        PowerFirst( void );
        PowerFirst( PowerFirst const & src );
        virtual ~PowerFirst( void );

        PowerFirst & operator=( PowerFirst const & rhs );
        virtual void attack( void ) const;
};
#endif