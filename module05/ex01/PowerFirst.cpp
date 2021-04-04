#include "PowerFirst.hpp"

PowerFirst::PowerFirst( void ) : AWeapon("Power Fist", 8, 50) {
}

void   PowerFirst::attack( void ) const {
    std::cout << "* pschhh... SBAM ! *" << std::endl;
}

PowerFirst::PowerFirst( PowerFirst const & src ) {
    *this = src;
    return;
}

PowerFirst::~PowerFirst( void ) {
}

PowerFirst & PowerFirst::operator=( PowerFirst const & rhs ) {
    if (this != &rhs) {
        this->name = rhs.getName();
        this->apcost = rhs.getAPCost();
        this->damage = rhs.getDamage();
    }
    return *this;
}