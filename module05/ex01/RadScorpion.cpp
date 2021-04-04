#include "RadScorpion.hpp"

RadScorpion::RadScorpion( void ) : Enemy(80, "RadScorpion") {
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion( void ) {
    std::cout << "* SPROTCH *" << std::endl;
}

void    RadScorpion::takeDamage(int amount) {
    amount = amount - 3;
    if (amount < 0)
        return;
    this->hp = this->hp - amount;
    if (this->hp < 0) {
        this->hp = 0;
    }
    return;
}

RadScorpion::RadScorpion( RadScorpion const & src ) {
    *this = src;
}

RadScorpion & RadScorpion::operator=( RadScorpion const & rhs ) {
    if (this != &rhs) {
        this->hp = rhs.getHP();
        this->type = rhs.getType();
    }
    return *this;
}