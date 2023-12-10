#include "ClapTrap.hpp"


int	main(){
	ClapTrap	Mdofus("Mdofus");
	Mdofus.Attack("ce con");
	Mdofus.takeDamage(5);
	Mdofus.beRepaired(2);
    Mdofus.takeDamage(5);
    Mdofus.takeDamage(5);
}