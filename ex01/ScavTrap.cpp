#include "ScavTrap.hpp"

ScavTrap :: ScavTrap()
{
    this->Hitpoints = 100;
    this->Energy = 50;
    this->Attackdamge = 20;
    std :: cout << "ScavTrap Defualt Constructor Called" << std :: endl;
}

ScavTrap :: ScavTrap(std :: string Name)
{
    this->Name = Name;
    this->Hitpoints = 100;
    this->Energy = 50;
    this->Attackdamge  = 20;
}

void ScavTrap :: operator=(ScavTrap &copy)
{
    this->Name = copy.Name;
    this->Hitpoints = copy.Hitpoints;
    this->Energy = copy.Energy;
    this->Attackdamge = copy.Attackdamge;
}



ScavTrap :: ScavTrap(ScavTrap &copy)
{
    *this = copy;
}


void ScavTrap :: attack(const std :: string &target)
{
    if(this->Hitpoints > 0 && this->Energy > 0)
    {
        std :: cout << "ScavTrap " << this->Name << " attacks ";
        std :: cout << target <<", causing "<<this->Attackdamge;
        std :: cout <<" points of damage!"<< std :: endl;
        this->Energy--;
    }
    else if(this->Energy <= 0)
    {
        std :: cout << "ScavTrap " << this->Name;
        std :: cout << " Can't attack because Not had enough Energy Points!";
        std :: cout << std :: endl;
    }
    else if(this->Hitpoints <= 0)
    {
        std :: cout << "ScavTrap " << this->Name;
        std :: cout << " Can't attack because Not had enough Hit Points!";
        std :: cout << std :: endl;
    }
}

void ScavTrap ::guardGate()
{
    std :: cout << this->Name << " now in Gate keeper mode." << std :: endl;
}
ScavTrap :: ~ScavTrap()
{
    std :: cout << "ScavTrap Destructor" << std :: endl;
}
