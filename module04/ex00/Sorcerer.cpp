#include "Sorcerer.hpp"

// Constructors
    // Init Constructor
Sorcerer::Sorcerer( std::string name, std::string title ) : _name(name), _title(title) {
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
    return;
}
    // Copy Constructor
Sorcerer::Sorcerer( Sorcerer const & src ) {
    *this = src;
    return;
}
    // Default Constructor
Sorcerer::Sorcerer( void ) {

}

// Deconstructor
Sorcerer::~Sorcerer( void ) {
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

// Getters
std::string     Sorcerer::getName( void ) const {
    return this->_name;
}

std::string     Sorcerer::getTitle( void ) const {
    return this->_title;
}

// Setters
void    Sorcerer::setName(std::string const & name) {
    this->_name = name;
}

void    Sorcerer::setTitle(std::string const & title) {
    this->_title = title;
}

// Operators
    // assignment operator
Sorcerer & Sorcerer::operator=(Sorcerer const & rhs) {
    if (this != &rhs) {
        this->setName(rhs.getName());
        this->setTitle(rhs.getTitle());
    }
    return *this;
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs) {
    o << "I am " << rhs.getName() << ", " << rhs.getTitle() << " and I like ponies!" << std::endl;
    return o;
}

void Sorcerer::polymorph(Victim const & target) const {
    target.getPolymorphed();
}