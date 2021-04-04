#include "AWeapon.hpp"

AWeapon::AWeapon( void ) {
}

AWeapon::AWeapon( std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {

}

AWeapon::~AWeapon( void ) {

}

std::string AWeapon::getName( void ) const {
    return this->_name;
}

int AWeapon::getAPCost( void ) const {
    return this->_apcost;
}

int AWeapon::getDamage( void ) const {
    return this->_damage;
}