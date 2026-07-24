#include "../includes/ClapTrap.hpp"

int main(){

    ClapTrap a("Bulldozer");
    a.attack("dummy");

    a.takeDamage(1);
    a.attack("dummy2");

    a.beRepaired(2);

    return 0;
}