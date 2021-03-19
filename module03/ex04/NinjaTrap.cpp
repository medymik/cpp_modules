#include "NinjaTrap.hpp"

/**
 * Canonical form
 */
NinjaTrap::NinjaTrap( void ) {
    std::cout << "NINJA-TP <the man has no name> f*** im alive i can cause damage to peoples now" << std::endl;
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
}

NinjaTrap::~NinjaTrap( void ) {
    std::cout << "NINJA-TP <" << this->_name << "> im going to a pretty place now" << std::endl;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src ) {
    *this = src;
    return;
}

NinjaTrap &  NinjaTrap::operator=( NinjaTrap const & rhs ) {
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
NinjaTrap::NinjaTrap( std::string const & name ) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    this->_name = name;
    std::cout << "NINJA-TP <" << this->_name << "> f*** im alive i can cause damage to peoples now" << std::endl;
    return ;
}

// methods
void    NinjaTrap::rangedAttack( std::string const & target ) {
    std::cout << "NINJA-TP <" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_rangedAttackDamage << "> points of damage!" << std::endl;
    return;
}

void    NinjaTrap::meleeAttack( std::string const & target ) {
    std::cout << "NINJA-TP <" << this->_name << "> attacks <" << target << "> at melee, causing <" << this->_meleeAttackDamage << "> points of damage!" << std::endl;
    return;
}

void    NinjaTrap::takeDamage( unsigned int amount ) {
    int realDamage = this->_hitPoints - (amount - this->_armorDamageReduction);
    this->setHitPoints(realDamage);
    std::cout << "NINJA-TP <" << this->_name << "> Aie i did take damage" << std::endl;
    return;
}

void    NinjaTrap::beRepaired( unsigned int amount ) {
    this->setHitPoints(this->_hitPoints + amount);
    std::cout << "NINJA-TP <" << this->_name << "> Hmmm i get healed" << std::endl;
    return;
}

 // special case of ninja trap
void	NinjaTrap::ninjaShoeBox(NinjaTrap const & target) {
	std::cout << "NINJA-TP: NINJA-TP attacks " << target.getName()
	<< " with a fork while he is eating" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(ClapTrap const & target) {
	std::cout << "NINJA-TP: NINJA-TP attacks " << target.getName()
	<< " HEll NINJA" <<std::endl;	
}

void	NinjaTrap::ninjaShoeBox(FragTrap const & target) {
	std::cout << "NINJA-TP: NINJA-TP attacks " << target.getName()
	<< " Live Long Ninja, death to FR4G-TP" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(ScavTrap const & target) {
	std::cout << "NINJA-TP: NINJA-TP attacks " << target.getName()
	<< " WHAT A BADASS NINJA HE IS :)" << std::endl;
}

