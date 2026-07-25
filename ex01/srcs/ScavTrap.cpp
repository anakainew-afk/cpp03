#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "Default constructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src){
    *this = src;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &src){
    if (this != &src){
        this->_Name = src._Name;
        this->_HP = src._HP;
        this->_EP = src._EP;
        this->_ATK = src._ATK;
    }
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "Destructor ScavTrap called" << std::endl;
}

void ScavTrap::attack(const std::string &target){
    if ((this->_HP > 0) & (this->_EP > 0)){
        this->_EP--;
        std::cout << "ScavTrap " << _Name << " attacks " << target << ", causing " << _ATK << " points of damage!" << std::endl;
        return ;
    }
    std::cout << "No more ressources for any actions." << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount){
    if (this->_HP <= 0){
        std::cout << "Stop she's already dead..." << std::endl;
        return ;
    }
    this->_HP = this->_HP - amount;
    if (this->_HP <= 0){
        std::cout << "Scav Trap dead." << std::endl;
        return ;
    }
    std::cout << "Scav Trap took " << amount << " damage. Remaining HP / EP: " << this->_HP << " / " << this->_EP << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount){
    if ((this->_EP > 0) & (this->_HP > 0)){
        this->_EP--;
        this->_HP += amount;
        std::cout << "Scav Trap healed itself +" << amount << "HP. Remaining HP / EP: " << this->_HP << " / " << this->_EP << std::endl;
        return ;
    }
    std::cout << "No more ressources for any actions." << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

