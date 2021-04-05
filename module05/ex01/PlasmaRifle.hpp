#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
    // private:
    public:
        PlasmaRifle( void );
        PlasmaRifle( PlasmaRifle const & src );
        virtual ~PlasmaRifle( void );

        PlasmaRifle & operator=( PlasmaRifle const & rhs );
        virtual void attack( void ) const;
};
#endif