
#include "FragTrap.hpp"

FragTrap :: FragTrap()
{
    this->Hitpoints = 100;
    this->Energy = 100;
    this->Attackdamge = 30;
    std :: cout << "FragTrap Defualt Constructor Called" << std :: endl;
}

FragTrap :: FragTrap(const std :: string &name)
{
    this->name = name;
    this->Hitpoints = 100;
    this->Energy = 100;
    this->Attackdamge = 30;
    std :: cout << "FragTrap Constructor Called" << std :: endl;
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
        std :: cout << "FragTrap " << this->name << " attacks ";
        std :: cout << target <<", causing "<<this->Attackdamge;
        std :: cout <<" points of damage!"<< std :: endl;
        this->Energy--;
    }
    else if(this->Energy <= 0)
    {
        std :: cout << "FragTrap " << this->name;
        std :: cout << " Can't attack because Not had enough Energy Points!";
        std :: cout << std :: endl;
    }
    else if(this->Hitpoints <= 0)
    {
        std :: cout << "FragTrap " << this->name;
        std :: cout << " Can't attack because Not had enough Hit Points!";
        std :: cout << std :: endl;
    }
}
void FragTrap :: highFivesGuys(void)
{
    std :: cout << "FragTrap "<<this->name <<" positive high fives request" << std :: endl;
}
FragTrap :: ~FragTrap()
{
    std :: cout << "FragTrap Destructor Called" << std :: endl;
}