#include "Popo.hpp"

Popo::Popo(void) {

}

Popo::Popo(std::string const & name): Victim(name) {
    std::cout << "Dog dog." << std::endl;
}

// Canonical form
Popo::Popo(Popo const & src) {
    *this = src;
}

Popo::~Popo(void) {
    std::cout << "Died Died!" << std::endl;
}

Popo & Popo::operator=(Popo const & rhs) {
    if (this != &rhs) {
        this->name = rhs.getName();
    }
    return *this;
}

// Polymorphed
void  Popo::getPolymorphed( void ) const {
    std::cout << this->name << " was just polymorphed into a pig!" << std::endl;
}