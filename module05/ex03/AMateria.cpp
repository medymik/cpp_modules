#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
    this->type = type;
    this->xp = 0;
}

AMateria::AMateria( AMateria const & src ) {
    *this = src;
}

AMateria::AMateria() {

}

AMateria::~AMateria() {

}

AMateria & AMateria::operator=( AMateria const & rhs ) {
    if (this != &rhs) {
        this->type = rhs.getType();
        this->xp = rhs.getXP();
    }
    return *this;
}
std::string const & AMateria::getType() const {
    return this->type;
}

unsigned int AMateria::getXP() const {
    return this->xp;
}

void    AMateria::use(ICharacter& target) {
    (void)target;
    this->xp += 10;
}