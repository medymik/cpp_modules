#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void ) : Enemy(170, "Super Mutant") {
    std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant( void ) {
    std::cout << "Aaargh ..." << std::endl;
}

void    SuperMutant::takeDamage(int amount) {
    amount = amount - 3;
    if (amount < 0)
        return;
    this->hp = this->hp - amount;
    if (this->hp < 0) {
        this->hp = 0;
    }
    return;
}

SuperMutant::SuperMutant( SuperMutant const & src ) {
    *this = src;
}

SuperMutant & SuperMutant::operator=( SuperMutant const & rhs ) {
    if (this != &rhs) {
        this->hp = rhs.getHP();
        this->type = rhs.getType();
    }
    return *this;
}