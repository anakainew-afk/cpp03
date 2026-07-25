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

void ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

