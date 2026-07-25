#include "../includes/FragTrap.hpp"

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

	std::cout << "\nFragTrap\n" << std::endl;

	FragTrap f("Mike");
	f.highFivesGuys();

	return (0);
}