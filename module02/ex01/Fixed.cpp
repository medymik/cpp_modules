#include "Fixed.h"

int const Fixed::_bits = 8;

Fixed::Fixed( void ) : _value(0) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::~Fixed( void ) {
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed const & src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::Fixed(int const value) {
   this->_value = value << this->_bits; 
   return;
}

Fixed::Fixed( float const value ) {
    this->_value = roundf(value * (1 << this->_bits));
    return;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs) {
        this->_value = rhs.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBites(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
    return;
}

float   Fixed::toFloat( void ) const {
    return (float)this->_value / (float)(1 << this->_bits);
}

int     Fixed::toInt( void ) const {
    return this->_value >> this->_bits;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
    o << rhs.toFloat();
    return o;
}