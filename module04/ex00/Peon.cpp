#include "Peon.hpp"

// Init constructor
Peon::Peon( std::string name ) : Victim(name) {
    std::cout << "Zog zog." << std::endl;
}

// Copy
Peon::Peon( Peon const & src ) : Victim(src) {
    *this = src;
    return;
}

// Destructor
Peon::~Peon( void ) {
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed( void ) const {
    std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Peon const & rhs) {
    o << "I'm "<< rhs.getName() << " and I like otters!" << std::endl;
    return o;
}