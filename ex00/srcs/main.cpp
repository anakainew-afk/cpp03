#include "../includes/ScavTrap.hpp"

int main(){
    
    std::cout << "=== Creation d'un ClapTrap 'clap' ===" << std::endl;
    ClapTrap clap("Rusty");
    clap.attack("dummy");
    clap.takeDamage(3);
    clap.beRepaired(2);

    std::cout << "\n=== Creation d'un ScavTrap 'scav' ===" << std::endl;
    ScavTrap scav("Titan");

    std::cout << "\n=== scav.attack() -> doit utiliser la version ScavTrap ===" << std::endl;
    scav.attack("dummy");

    std::cout << "\n=== scav.takeDamage() -> doit utiliser la version ScavTrap ===" << std::endl;
    scav.takeDamage(10);

    std::cout << "\n=== scav.beRepaired() -> doit utiliser la version ScavTrap ===" << std::endl;
    scav.beRepaired(5);

    std::cout << "\n=== scav.guardGate() -> fonction propre a ScavTrap ===" << std::endl;
    scav.guardGate();

    std::cout << "\n=== Fin du main, destruction des objets ===" << std::endl;
    return 0;
}