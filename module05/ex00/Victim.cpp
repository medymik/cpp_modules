#include "Victim.hpp"

// Default constructor
Victim::Victim( void ) {
    return;
}

// Copy Constructor
Victim::Victim( Victim const & src ) {
    *this = src;
    return;
}

// Destructor
Victim::~Victim( void ) {
    std::cout <<  "The victim " << this->name << " died for no apparent reasons!" << std::endl;
    return;
}

// Initialisation constructor
Victim::Victim(std::string const & name) {
    this->name = name;
    std::cout << "A random victim called " << this->name << " just appeared!" << std::endl;
}

// Redirect to the output stream
std::ostream & operator<<(std::ostream & o, Victim & rhs) {
    o << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
    return o;
}

// Operator =
Victim & Victim::operator=(Victim const & rhs) {
    if (this != &rhs) {
        this->name = rhs.getName();
    }
    return *this;
}

// Getters
std::string Victim::getName( void ) const {
    return this->name;
}

// Setters
void        Victim::setName( std::string const & name ) {
    this->name = name;
}

// Polymorphed
void        Victim::getPolymorphed( void ) const {
    std::cout << this->name << " was just polymorphed in a cute little sheep!" << std::endl;
}