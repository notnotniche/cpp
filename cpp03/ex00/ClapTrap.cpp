#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "default";
    Hitpoints = 10;
    Energy = 10;
    Attack_Damage = 0;
    std::cout << "ClapTrap created " << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    name = name;
    Hitpoints = 10;
    Energy = 10;
    Attack_Damage = 0;
    std::cout << "ClapTrap created " << std::endl;
}

ClapTrap::ClapTrap( ClapTrap &toCopy)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = toCopy;
	return;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destroyed " << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap &toCopy){
	this->name = toCopy.name;
	this->Hitpoints = toCopy.Hitpoints;
	this->Energy = toCopy.Energy;
	this->Attack_Damage = toCopy.Attack_Damage;
	return(*this);
}

void ClapTrap::Attack(const std::string &target)
{
    if (Energy > 0)
    {
        Energy--;
        std::cout << "ClapTrap " << name << " attacks " << target;
        std::cout << " Causing " << Attack_Damage << " damage point to " << target;
        std::cout << std::endl;
		std::cout << "He now has " << Energy << " point of energy" << std::endl;
		std::cout << std::endl;
    }
    else
    {
        std::cout << name << "not enough energy" << target << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hitpoints > 0)
    {
        Hitpoints = Hitpoints - amount;
        std::cout << "claptrap " << name << " has taken " << amount;
        std::cout << "of damage , he now has " << Hitpoints << " points of life left";
        std::cout << std::endl;
        std::cout << std::endl;
    }
    else
    {
        std::cout << name << "he s dead" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Hitpoints > 0 && Energy > 0 && amount > 0)
    {
        Hitpoints = Hitpoints + amount;
        Energy--;
        std::cout << "Claptrap " << name << "is repairing grouik grouik" << amount;
        std::cout << "of Hitpoints , the claptrap now has " << Hitpoints << " point of life" << std::endl;
        std::cout << "He now has " << Energy << " point of energy" << std::endl;
    }
    else
        std::cout << name << " hes already dead" << std::endl;
}