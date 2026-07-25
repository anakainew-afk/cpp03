#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name), _HP(100), _EP(50), _ATK(20){
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src){
    *this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src){
    if (this != &src){
        this->_Name = src._Name;
        this->_HP = src._HP;
        this->_EP = src._EP;
        this->_ATK = src._ATK;
    }
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target){
    if ((this->_HP > 0) & (this->_EP > 0)){
        this->_EP--;
        std::cout << _Name << " attacks " << target << ", causing " << _ATK << " points of damage!" << std::endl;
        return ;
    }
    std::cout << "No more ressources for any actions." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->_HP <= 0){
        std::cout << "Stop its already dead..." << std::endl;
        return ;
    }
    this->_HP = this->_HP - amount;
    if (this->_HP <= 0){
        std::cout << _Name << " dead." << std::endl;
        return ;
    }
    std::cout << _Name << " took " << amount << " damage. Remaining HP / EP: " << this->_HP << " / " << this->_EP << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if ((this->_EP > 0) & (this->_HP > 0)){
        this->_EP--;
        this->_HP += amount;
        std::cout << _Name << " healed itself +" << amount << "HP. Remaining HP / EP: " << this->_HP << " / " << this->_EP << std::endl;
        return ;
    }
    std::cout << "No more ressources for any actions." << std::endl;
}