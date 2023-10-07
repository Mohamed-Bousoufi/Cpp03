
#include "FragTrap.hpp"

FragTrap :: FragTrap()
{
    this->Hitpoints = 100;
    this->Energy = 100;
    this->Attackdamge = 30;
}

FragTrap :: FragTrap(const std :: string Name)
{
    this->Name = Name;
    this->Hitpoints = 100;
    this->Energy = 100;
    this->Attackdamge = 30;
}

void FragTrap :: operator=(FragTrap &copy)
{
    this->Hitpoints = copy.Hitpoints;
    this->Energy = copy.Energy;
    this->Attackdamge = copy.Attackdamge;
}

FragTrap :: FragTrap(FragTrap &copy)
{
    *this = copy;
}

void FragTrap :: attack(const std :: string &target)
{
        if(this->Hitpoints > 0 && this->Energy > 0)
    {
        std :: cout << "FragTrap " << this->Name << " attacks ";
        std :: cout << target <<", causing "<<this->Attackdamge;
        std :: cout <<" points of damage!"<< std :: endl;
        this->Energy--;
    }
    else if(this->Energy <= 0)
    {
        std :: cout << "FragTrap " << this->Name;
        std :: cout << " Can't attack because Not had enough Energy Points!";
        std :: cout << std :: endl;
    }
    else if(this->Hitpoints <= 0)
    {
        std :: cout << "FragTrap " << this->Name;
        std :: cout << " Can't attack because Not had enough Hit Points!";
        std :: cout << std :: endl;
    }
}

void FragTrap :: highFivesGuys(void)
{
    std :: cout << "FragTrap "<<this->Name <<" positive high fives request" << std :: endl;
}

FragTrap :: ~FragTrap()
{
    std :: cout << "FragTrap Destructor Called" << std :: endl;
}