#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) : AWeapon("Plasma Rifle", 5, 21) {
}

void PlasmaRifle::attack( void ) const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src ) {
    *this = src;
    return;
}

PlasmaRifle::~PlasmaRifle( void ) {
}

PlasmaRifle & PlasmaRifle::operator=( PlasmaRifle const & rhs ) {
    if (this != &rhs) {
        this->name = rhs.getName();
        this->apcost = rhs.getAPCost();
        this->damage = rhs.getDamage();
    }
    return *this;
}