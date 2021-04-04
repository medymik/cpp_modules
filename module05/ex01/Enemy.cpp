#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) {
    this->hp = hp;
    this->type = type;
}

Enemy::~Enemy( void ) {
}

std::string const & Enemy::getType() const {
    return this->type;
}

int Enemy::getHP() const {
    return this->hp;
}

Enemy::Enemy( void ) {

}

Enemy::Enemy( Enemy const & src ) {
    *this = src;
}

Enemy & Enemy::operator=( Enemy const & rhs ) {
    if (this != &rhs) {
        this->hp = rhs.getHP();
        this->type = rhs.getType();
    }
    return *this;
}

void    Enemy::takeDamage(int amount) {
    if (amount < 0)
        return;
    this->hp = this->hp - amount;
    if (this->hp < 0) {
        this->hp = 0;
    }
    return;
}