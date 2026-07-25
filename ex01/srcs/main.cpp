#include "../includes/ScavTrap.hpp"

// int main(){
    
//     std::cout << "\n=== Creation d'un ScavTrap 'scav' ===" << std::endl;
//     ScavTrap scav("Titan");

//     std::cout << "\n=== scav.attack() -> doit utiliser la version ScavTrap ===" << std::endl;
//     scav.attack("dummy");

//     std::cout << "\n=== scav.takeDamage() -> doit utiliser la version ScavTrap ===" << std::endl;
//     scav.takeDamage(10);

//     std::cout << "\n=== scav.beRepaired() -> doit utiliser la version ScavTrap ===" << std::endl;
//     scav.beRepaired(5);

//     std::cout << "\n=== scav.guardGate() -> fonction propre a ScavTrap ===" << std::endl;
//     scav.guardGate();

//     std::cout << "\n=== Fin du main, destruction des objets ===" << std::endl;
//     return 0;
// }

int	main(){

	std::cout << "ClapTrap\n" << std::endl;

	ClapTrap b("Cody");
	b.beRepaired(3);
	b.attack("Cody-clone");
	b.beRepaired(3);

	std::cout << "\nScavTrap\n" << std::endl;

	ScavTrap d("John");
	d.attack("John-clone");
	d.takeDamage(101);
	d.takeDamage(15);
	d.attack("ScavTrap-clone");
	return (0);
}
