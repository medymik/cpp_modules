#include "PlasmaRifle.hpp"

void PlasmaRifle::attack( void ) const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::PlasmaRifle( void ) {

}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src ) {
    *this = src;
    return;
}