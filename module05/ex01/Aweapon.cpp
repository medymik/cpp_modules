#include "AWeapon.hpp"

// Constructor
AWeapon::AWeapon(std::string const & name, int apcost, int damage) {
    this->name = name;
    this->apcost = apcost;
    this->damage = damage;
}

// Copy Constructor
AWeapon::AWeapon( AWeapon const & src ) {
    *this = src;
}

AWeapon & AWeapon::operator=( AWeapon const & rhs ) {
    if (this != &rhs) {
        this->name = rhs.getName();
        this->apcost = rhs.getAPCost();
        this->damage = rhs.getDamage();
    }
    return *this;
}

// Destructor
AWeapon::~AWeapon( void ) {

}


// Getters
std::string const & AWeapon::getName( void ) const {
    return this->name;
}

int     AWeapon::getAPCost( void ) const {
    return this->apcost;
}

int     AWeapon::getDamage( void ) const {
    return this->damage;
}