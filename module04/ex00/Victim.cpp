#include "Victim.hpp"

Victim::Victim( std::string name ) : _name(name) {
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim( void ) {
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs) {
    o << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
    return o;
}

// Getters
std::string     Victim::getName( void ) const {
    return this->_name;
}

void Victim::getPolymorphed( void ) const {
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}