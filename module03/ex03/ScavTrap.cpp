#include "ScavTrap.hpp"


/**
 * Canonical form
 */
ScavTrap::ScavTrap( void ) {
    std::cout << "SC4V-TP <the man has no name> f*** im alive i can cause damage to peoples now" << std::endl;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_level = 1;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 3;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "SC4V-TP <" << this->_name << "> im going to a pretty place now too" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {
    *this = src;
    return;
}

ScavTrap &  ScavTrap::operator=( ScavTrap const & rhs ) {
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
ScavTrap::ScavTrap( std::string const & name ) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_level = 1;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 3;
    this->_name = name;
    std::cout << "SC4V-TP <" << this->_name << "> f*** im alive i can cause damage to peoples now" << std::endl;
    return ;
}

// methods
void    ScavTrap::rangedAttack( std::string const & target ) {
    std::cout << "SC4V-TP <" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_rangedAttackDamage << "> points of damage!" << std::endl;
    return;
}

void    ScavTrap::meleeAttack( std::string const & target ) {
    std::cout << "SC4V-TP <" << this->_name << "> attacks <" << target << "> at melee, causing <" << this->_meleeAttackDamage << "> points of damage!" << std::endl;
    return;
}

void    ScavTrap::takeDamage( unsigned int amount ) {
    int realDamage = this->_hitPoints - (amount - this->_armorDamageReduction);
    this->setHitPoints(realDamage);
    std::cout << "SC4V-TP <" << this->_name << "> Aie i did take damage" << std::endl;
    return;
}

void    ScavTrap::beRepaired( unsigned int amount ) {
    this->setHitPoints(this->_hitPoints + amount);
    std::cout << "SC4V-TP <" << this->_name << "> Hmmm i get healed" << std::endl;
    return;
}

// random 5 attaks
void    ScavTrap::challengeNewcomer( void ) {
    std::string challenges[] = {
        "Did you try to open me?",
	    "A single mag won't be enough!",
	    "Let's get this party started!",
	    "You call yourself a badass?",
	    "Did someone feel something?"
    };
    std::cout << "SC4V-TP <" << this->_name << "> " << challenges[rand() % 5] << std::endl;
}