#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
    public:
        virtual void attack( void ) const;
        PlasmaRifle( void );
        PlasmaRifle( PlasmaRifle const & src );
};
#endif