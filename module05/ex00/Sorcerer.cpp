#include "Sorcerer.hpp"

// Default constructor
Sorcerer::Sorcerer( void ) {
    return;
}

// Copy Constructor
Sorcerer::Sorcerer( Sorcerer const & src ) {
    *this = src;
    return;
}

// Destructor
Sorcerer::~Sorcerer( void ) {
    std::cout <<  this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
    return;
}

// Initialisation constructor
Sorcerer::Sorcerer(std::string const & name, std::string const & title) {
    this->name = name;
    this->title = title;
    std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

// Redirect to the output stream
std::ostream & operator<<(std::ostream & o, Sorcerer & rhs) {
    o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and i like ponies!" << std::endl;
    return o;
}

// Operator =
Sorcerer & Sorcerer::operator=(Sorcerer const & rhs) {
    if (this != &rhs) {
        this->name = rhs.getName();
        this->title = rhs.getTitle();
    }
    return *this;
}

// Getters
std::string Sorcerer::getName( void ) const {
    return this->name;
}

std::string Sorcerer::getTitle( void ) const {
    return this->title;
}

// Setters
void        Sorcerer::setName( std::string const & name ) {
    this->name = name;
}

void        Sorcerer::setTitle( std::string const & title ) {
    this->title = title;
}

// polymorph
void        Sorcerer::polymorph( Victim const & victim) const {
    victim.getPolymorphed();
}