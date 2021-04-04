#include "Peon.h"

Peon::Peon(void) {

}

Peon::Peon(std::string const & name): Victim(name) {
    std::cout << "Zog zog." << std::endl;
}

// Canonical form
Peon::Peon(Peon const & src) {
    *this = src;
}

Peon::~Peon(void) {
    std::cout << "Bleuark..." << std::endl;
}

Peon & Peon::operator=(Peon const & rhs) {
    if (this != &rhs) {
        this->name = rhs.getName();
    }
    return *this;
}

// Polymorphed
void  Peon::getPolymorphed( void ) const {
    std::cout << this->name << " was just polymorphed into a pink pony!" << std::endl;
}