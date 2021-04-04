#include "Character.hpp"

Character::Character( void ) {

}

Character::Character( std::string const & name ) {
    this->name = name;
    this->ap = 40;
}

void    Character::recoverAP( void ) {
    this->ap += 10;
    if (this->ap > 40) {
        this->ap = 40;
    }
}

void    Character::attack(Enemy* enemy) {
    if (this->weapon == nullptr)
        return;
    std::cout << this->name << " attaque " << enemy->getType() << " with a " << weapon->getName() << std::endl;
    if (this->ap >= this->weapon->getAPCost()) {
        enemy->takeDamage(this->weapon->getDamage());
        this->ap -= this->weapon->getAPCost();
        if (enemy->getHP() == 0) {
            delete enemy;
        }
    }
}

void    Character::equip(AWeapon *weapon) {
    this->weapon = weapon;
}

// Character & Character::operator=( Character const & rhs ) {
    
// }

std::ostream & operator<<( std::ostream & o, Character const & rhs ) {
    if (!rhs.getWeapon()) {
        o << rhs.getName() << " has " << rhs.getAp() << " AP and is unarmed" << std::endl;
    }
    o << rhs.getName() << " has " << rhs.getAp() << " AP and carries a " << rhs.getWeapon()->getName() << std::endl;
    return o;
}

std::string const & Character::getName( void ) const {
    return this->name;
}

AWeapon* const Character::getWeapon( void ) const {
    return this->weapon;
}

int Character::getAp( void ) const {
    return this->ap;
}