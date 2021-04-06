#include "Character.hpp"

Character::Character( void ) {
    this->list = new t_node[4];
    for (int i = 0; i < 4; i++)
        this->list[i].used = false;
}

Character::~Character( void ) {
    delete[] this->list;
}

Character::Character( Character const & src ) {
    *this = src;
}

Character & Character::operator=( Character const & rhs ) {
    if (this != &rhs) {
        this->name = rhs.name;
        this->list = rhs.list;
    }
    return *this;
}

void Character::equip( AMateria* m) {
    int i = 0;
    while (i < 4) {
        if (this->list[i].used == false) {
            this->list[i].item = m;
            this->list[i].used = true;
            return;
        }
        i++;
    }
}

void Character::unequip( int idx ) {
    if (idx >= 0 && idx < 4) {
        this->list[idx].used = false;
    }
}

void Character::use( int idx, ICharacter& target ) {
    if (idx >= 0 && idx < 4) {
        if (this->list[idx].used == true) {
            this->list[idx].item->use(target);
        }
    }
}

std::string const & Character::getName() const {
    return this->name;
}

Character::Character( std::string const & name ) {
    this->name = name;
    this->list = new t_node[4];
    for (int i = 0; i < 4; i++)
        this->list[i].used = false;
}