#include "ScavTrap.hpp"

ScavTrap :: ScavTrap()
{
    this->Hitpoints = 100;
    this->Energy = 50;
    this->Attackdamge = 20;
    std :: cout << "ScavTrap Defualt Constructor Called" << std :: endl;
}

ScavTrap :: ScavTrap(const std :: string &name)
{
    this->name = name;
    this->Hitpoints = 100;
    this->Energy = 50;
    this->Attackdamge  = 20;
    std :: cout << "ScavTrap Constructor Called" << std :: endl;
}

void ScavTrap :: operator=(ScavTrap &copy)
{
    this->name = copy.name;
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
        std :: cout << "ScavTrap " << this->name << " attacks ";
        std :: cout << target <<", causing "<<this->Attackdamge;
        std :: cout <<" points of damage!"<< std :: endl;
        this->Energy--;
    }
    else if(this->Energy <= 0)
    {
        std :: cout << "ScavTrap " << this->name;
        std :: cout << " Can't attack because Not had enough Energy Points!";
        std :: cout << std :: endl;
    }
    else if(this->Hitpoints <= 0)
    {
        std :: cout << "ScavTrap " << this->name;
        std :: cout << " Can't attack because Not had enough Hit Points!";
        std :: cout << std :: endl;
    }
}

void ScavTrap ::guardGate()
{
    std :: cout << this->name << " now in Gate keeper mode." << std :: endl;
}
ScavTrap :: ~ScavTrap()
{
    std :: cout << "ScavTrap Destructor Called" << std :: endl;
}
