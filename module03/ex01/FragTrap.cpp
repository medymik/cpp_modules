#include "FragTrap.hpp"

/**
 * Getters
 */
int FragTrap::getHitPoints( void ) const {
    return this->_hitPoints;
}

int FragTrap::getMaxHitPoints( void ) const {
    return this->_maxHitPoints;
}

int FragTrap::getEnergyPoints( void ) const {
    return this->_energyPoints;
}

int FragTrap::getMaxEnergyPoints( void ) const {
    return this->_maxEnergyPoints;
}

int FragTrap::getLevel( void ) const {
    return this->_level;
}

int FragTrap::getMeleeAttackDamage( void ) const {
    return this->_meleeAttackDamage;
}

int FragTrap::getRangedAttackDamage( void ) const {
    return this->_rangedAttackDamage;
}

int FragTrap::getArmorDamageReduction( void ) const {
    return this->_armorDamageReduction;
}

std::string FragTrap::getName( void ) const {
    return this->_name;
}

/**
 * Setters
 */
void FragTrap::setHitPoints( int val ) {
    if ( val > this->_maxHitPoints ) {
        this->_hitPoints = this->_maxHitPoints;
    } else if ( val < 0 ) {
        this->_hitPoints = 0;
    } else {
        this->_hitPoints = val;
    }
}

void FragTrap::setMaxHitPoints( int val ) {
    this->_maxHitPoints = val;
}

void FragTrap::setEnergyPoints( int val ) {
    if ( val > this->_maxEnergyPoints ) {
        this->_energyPoints = this->_maxEnergyPoints;
    } else if ( val < 0 ) {
        this->_energyPoints = 0;
    } else {
        this->_energyPoints = val;
    }
}

void FragTrap::setMaxEnergyPoints( int val ) {
    this->_energyPoints = val;
}

void FragTrap::setLevel( int val ) {
    this->_level = val;
}

void FragTrap::setMeleeAttackDamage( int val ) {
    this->_meleeAttackDamage = val;
}

void FragTrap::setRangedAttackDamage( int val ) {
    this->_rangedAttackDamage = val;
}

void FragTrap::setArmorDamageReduction( int val ) {
    this->_armorDamageReduction = val;
}

std::string FragTrap::setName( std::string val ) {
    this->_name = val;
}

/**
 * Canonical form
 */
FragTrap::FragTrap( void ) {
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
}

FragTrap::~FragTrap( void ) {}FragTrap::FragTrap( FragTrap const & src ) {
    *this = src;
    return;
}

FragTrap &  FragTrap::operator=( FragTrap const & rhs ) {
    if (this != &rhs) {
        this->_hitPoints = rhs.getHitPoints();
        this->_maxHitPoints = rhs.getMaxHitPoints();
        this->_energyPoints = rhs.getEnergyPoints();
        this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
        this->_level = rhs.getLevel();
        this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
        this->_rangedAttackDamage = rhs.getRangedAttackDamage();
        this->_armorDamageReduction = rhs.getArmorDamageReduction();
        this->_name = rhs.getName();
    }
    return *this;
}

// Name parametre of constructor
FragTrap::FragTrap( std::string const & name ) {
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    this->_name = name;
    return ;
}

// methods
void    FragTrap::rangedAttack( std::string const & target ) {
    std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_rangedAttackDamage << "> points of damage!" << std::endl;
    return;
}

void    FragTrap::meleeAttack( std::string const & target ) {
    std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at melee, causing <" << this->_meleeAttackDamage << "> points of damage!" << std::endl;
    return;
}

void    FragTrap::takeDamage( unsigned int amount ) {
    int realDamage = this->_hitPoints - (amount - this->_armorDamageReduction);
    this->setHitPoints(realDamage);
    std::cout << "FR4G-TP <" << this->_name << "> Aie i did take damage" << std::endl;
    return;
}

void    FragTrap::beRepaired( unsigned int amount ) {
    this->setHitPoints(this->_hitPoints + amount);
    std::cout << "FR4G-TP <" << this->_name << "> Hmmm i get healed" << std::endl;
    return;
}

// random 5 attaks
void    FragTrap::vaulthunter_dot_exe(std::string const & target) {
    if (this->_energyPoints < 25) {
        std::cout << "damn i dont have energy" << std::endl;
        return ;
    }
    this->setEnergyPoints(this->_energyPoints - 25);
    for (int i = 0; i < 5; i++)
    {
        srand(time(NULL));
        int randValue = rand() % 2;
        switch (randValue)
        {
        case 0:
            this->rangedAttack(target);
            break;
        
        default:
            this->meleeAttack(target);
            break;
        }
    }
}