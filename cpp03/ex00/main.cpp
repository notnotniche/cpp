#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Dofus("Dofus");
    ClapTrap Wakfu("Wakfu");
    Dofus.Attack("Wakfu");
    Wakfu.takeDamage(11);
    Wakfu.beRepaired(2);

    
}