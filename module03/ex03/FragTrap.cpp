#include "FragTrap.hpp"

/**
 * Canonical form
 */
FragTrap::FragTrap( void ) {
    std::cout << "FR4G-TP <the man has no name> f*** im alive i can cause damage to peoples now" << std::endl;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
}

FragTrap::~FragTrap( void ) {
    std::cout << "FR4G-TP <" << this->_name << "> im going to a pretty place now" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src ) {
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
FragTrap::FragTrap( std::string const & name ) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    this->_name = name;
    std::cout << "FR4G-TP <" << this->_name << "> f*** im alive i can cause damage to peoples now" << std::endl;
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
        std::cout << "FR4G-TP <" << this->_name << "> Hmmm i do not have energy" << std::endl;
        return ;
    }
    this->setEnergyPoints(this->_energyPoints - 25);
    for (int i = 0; i < 5; i++)
    {
        int randValue = rand() % 2;
        switch (randValue)
        {
        case 0:
            this->rangedAttack(target);
            break;
        
        case 1:
            this->meleeAttack(target);
            break;
        }
    }
}