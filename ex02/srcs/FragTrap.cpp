#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src){
    *this = src;
}

FragTrap& FragTrap::operator=(const FragTrap &src){
    if (this != &src){
        this->_Name = src._Name;
        this->_HP = src._HP;
        this->_EP = src._EP;
        this->_ATK = src._ATK;
    }
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(){
    std::cout << "Hey Guys can you give me a high five? anyone? plsss???" << std::endl; 
}