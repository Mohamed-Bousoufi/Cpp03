#include "DiamondTrap.hpp"
DiamondTrap::DiamondTrap() 
{
    ClapTrap :: name = "_clap_name";
    this->Energy = 50;
    std :: cout << "Diamnond Default Constructor" << std :: endl;
}

DiamondTrap :: DiamondTrap(const std :: string name) : name(name)
{
    std :: cout << "Diamnond Constructor" << std :: endl;
    ClapTrap :: name = (name + "_clap_name");
    this->Energy = 50;
}

void DiamondTrap :: operator=(DiamondTrap & copy)
{
    this->name = copy.name;
    this->Energy = copy.Energy;
    this->Hitpoints = copy.Hitpoints;
    this->Attackdamge = copy.Attackdamge;
    FragTrap :: operator=(copy);
    ScavTrap :: operator=(copy);
}

DiamondTrap :: DiamondTrap(DiamondTrap &copy)
{
    *this = copy;
}

DiamondTrap :: ~DiamondTrap()
{
    std :: cout << "DiamondTrap Destructor Called" << std :: endl;
}

void DiamondTrap :: attack(const std :: string &target)
{
    ScavTrap :: attack(target);
}

void DiamondTrap :: whoAmI()
{
    std :: cout << "My ClapTrap Name is " << ClapTrap :: name << " My name is "<< name << std :: endl;
}