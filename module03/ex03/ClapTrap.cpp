# include "ClapTrap.hpp"

/**
 * Getters
 */
int ClapTrap::getHitPoints( void ) const {
    return this->_hitPoints;
}

int ClapTrap::getMaxHitPoints( void ) const {
    return this->_maxHitPoints;
}

int ClapTrap::getEnergyPoints( void ) const {
    return this->_energyPoints;
}

int ClapTrap::getMaxEnergyPoints( void ) const {
    return this->_maxEnergyPoints;
}

int ClapTrap::getLevel( void ) const {
    return this->_level;
}

int ClapTrap::getMeleeAttackDamage( void ) const {
    return this->_meleeAttackDamage;
}

int ClapTrap::getRangedAttackDamage( void ) const {
    return this->_rangedAttackDamage;
}

int ClapTrap::getArmorDamageReduction( void ) const {
    return this->_armorDamageReduction;
}

std::string ClapTrap::getName( void ) const {
    return this->_name;
}

/**
 * Setters
 */
void ClapTrap::setHitPoints( int val ) {
    if ( val > this->_maxHitPoints ) {
        this->_hitPoints = this->_maxHitPoints;
    } else if ( val < 0 ) {
        this->_hitPoints = 0;
    } else {
        this->_hitPoints = val;
    }
}

void ClapTrap::setMaxHitPoints( int val ) {
    this->_maxHitPoints = val;
}

void ClapTrap::setEnergyPoints( int val ) {
    if ( val > this->_maxEnergyPoints ) {
        this->_energyPoints = this->_maxEnergyPoints;
    } else if ( val < 0 ) {
        this->_energyPoints = 0;
    } else {
        this->_energyPoints = val;
    }
}

void ClapTrap::setMaxEnergyPoints( int val ) {
    this->_energyPoints = val;
}

void ClapTrap::setLevel( int val ) {
    this->_level = val;
}

void ClapTrap::setMeleeAttackDamage( int val ) {
    this->_meleeAttackDamage = val;
}

void ClapTrap::setRangedAttackDamage( int val ) {
    this->_rangedAttackDamage = val;
}

void ClapTrap::setArmorDamageReduction( int val ) {
    this->_armorDamageReduction = val;
}

void ClapTrap::setName( std::string val ) {
    this->_name = val;
}

/**
 * Canonical form
 */
ClapTrap::ClapTrap( void ) {
    std::cout << "CL4P-TP <the man has no name> f*** im alive i can cause damage to peoples now" << std::endl;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "CL4P-TP <" << this->_name << "> im going to a pretty place now" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {
    *this = src;
    return;
}

ClapTrap &  ClapTrap::operator=( ClapTrap const & rhs ) {
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
ClapTrap::ClapTrap( std::string const & name ) {
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 100;
    this->_meleeAttackDamage = 100;
    this->_rangedAttackDamage = 100;
    this->_armorDamageReduction = 100;
    this->_name = name;
    std::cout << "CL4P-TP <" << this->_name << "> f*** im alive i can cause damage to peoples now" << std::endl;
    return ;
}

// methods
void    ClapTrap::rangedAttack( std::string const & target ) {
    std::cout << "CL4P-TP <" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_rangedAttackDamage << "> points of damage!" << std::endl;
    return;
}

void    ClapTrap::meleeAttack( std::string const & target ) {
    std::cout << "CL4P-TP <" << this->_name << "> attacks <" << target << "> at melee, causing <" << this->_meleeAttackDamage << "> points of damage!" << std::endl;
    return;
}

void    ClapTrap::takeDamage( unsigned int amount ) {
    int realDamage = this->_hitPoints - (amount - this->_armorDamageReduction);
    this->setHitPoints(realDamage);
    std::cout << "CL4P-TP <" << this->_name << "> Aie i did take damage" << std::endl;
    return;
}

void    ClapTrap::beRepaired( unsigned int amount ) {
    this->setHitPoints(this->_hitPoints + amount);
    std::cout << "CL4P-TP <" << this->_name << "> Hmmm i get healed" << std::endl;
    return;
}