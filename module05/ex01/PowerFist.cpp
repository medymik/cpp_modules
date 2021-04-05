#include "PowerFist.hpp"

PowerFist::PowerFist( void ) : AWeapon("Power Fist", 8, 50) {
}

void   PowerFist::attack( void ) const {
    std::cout << "* pschhh... SBAM ! *" << std::endl;
}

PowerFist::PowerFist( PowerFist const & src ) : AWeapon(src) {
}

PowerFist::~PowerFist( void ) {
}

PowerFist & PowerFist::operator=( PowerFist const & rhs ) {
    if (this != &rhs) {
        this->name = rhs.getName();
        this->apcost = rhs.getAPCost();
        this->damage = rhs.getDamage();
    }
    return *this;
}