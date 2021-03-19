#include "SuperTrap.hpp"

/**
 * Canonical form
 */


SuperTrap::~SuperTrap( void ) {
    std::cout << "SUPER-TP <" << FragTrap::_name << "> im going to a pretty place now" << std::endl;
}

SuperTrap::SuperTrap( SuperTrap const & src ) {
    *this = src;
    return;
}

SuperTrap &  SuperTrap::operator=( SuperTrap const & rhs ) {
    if (this != &rhs) {
        // this->_hitPoints = rhs.getHitPoints();
        // this->_maxHitPoints = rhs.getMaxHitPoints();
        // this->_energyPoints = rhs.getEnergyPoints();
        // this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
        // this->_level = rhs.getLevel();
        // this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
        // this->_rangedAttackDamage = rhs.getRangedAttackDamage();
        // this->_armorDamageReduction = rhs.getArmorDamageReduction();
        // this->_name = rhs.getName();
        FragTrap::_hitPoints = 100;
        FragTrap::_maxHitPoints = 100;
        NinjaTrap::_energyPoints = 100;
        NinjaTrap::_maxEnergyPoints = 100;
        this->_level = 1;
        NinjaTrap::_meleeAttackDamage = 100;
        FragTrap::_rangedAttackDamage = 20;
        FragTrap::_armorDamageReduction = 5;
        this->_name = rhs.getName();
    }
    return *this;
}

// Name parametre of constructor
SuperTrap::SuperTrap( std::string const & name ) : ClapTrap(name) {
    FragTrap::_hitPoints = 100;
    FragTrap::_maxHitPoints = 100;
    NinjaTrap::_energyPoints = 100;
    NinjaTrap::_maxEnergyPoints = 100;
    this->_level = 1;
    NinjaTrap::_meleeAttackDamage = 100;
    FragTrap::_rangedAttackDamage = 20;
    FragTrap::_armorDamageReduction = 5;
    this->_name = name;
    std::cout << "SUPER-TP <" << this->_name << "> f*** im alive i can cause damage to peoples now" << std::endl;
    return ;
}

// methods
void    SuperTrap::rangedAttack( std::string const & target ) {
    FragTrap::rangedAttack(target);
    return;
}

void    SuperTrap::meleeAttack( std::string const & target ) {
    NinjaTrap::meleeAttack(target);
    return;
}

void    SuperTrap::takeDamage( unsigned int amount ) {
    int realDamage = this->_hitPoints - (amount - this->_armorDamageReduction);
    this->setHitPoints(realDamage);
    std::cout << "SUPER-TP <" << this->_name << "> Aie i did take damage" << std::endl;
    return;
}

void    SuperTrap::beRepaired( unsigned int amount ) {
    this->setHitPoints(this->_hitPoints + amount);
    std::cout << "SUPER-TP <" << this->_name << "> Hmmm i get healed" << std::endl;
    return;
}
