#include "ClapTrap.hpp"

ClapTrap :: ClapTrap()
{
    this->Hitpoints = 10;
    this->Energy = 10;
    this->Attackdamge = 0;
    std :: cout << "Default Constructor Called" << std :: endl;
}

ClapTrap :: ClapTrap(std :: string Name) : Name(Name)
{
    this->Hitpoints = 10;
    this->Energy = 10;
    this->Attackdamge = 0;
    std :: cout <<"ClapTrap "<< this->Name <<" Constructor Called" << std::endl;
}
ClapTrap :: ClapTrap(ClapTrap &copy)
{
    *this = copy;
}

ClapTrap :: ~ClapTrap()
{
    std :: cout <<"ClapTrap "<< this->Name <<" Destructor Called" << std::endl;
}
void ClapTrap :: operator=(ClapTrap &copy)
{
    this->Name = copy.Name;
    this->Hitpoints = copy.Hitpoints;
    this->Energy = copy.Energy;
    this->Attackdamge = copy.Attackdamge;
}

void ClapTrap :: attack(const std :: string &target)
{
    if(this->Hitpoints > 0 && this->Energy > 0)
    {
        std :: cout << "ClapTrap " << this->Name << " attacks ";
        std :: cout << target <<", causing "<<this->Attackdamge;
        std :: cout <<" points of damage!"<< std :: endl;
        this->Energy--;
    }
    else if(this->Energy <= 0)
    {
        std :: cout << "ClapTrap " << this->Name;
        std :: cout << " Can't attack because Not had enough Energy Points!";
        std :: cout << std :: endl;
    }
    else if(this->Hitpoints <= 0)
    {
        std :: cout << "ClapTrap " << this->Name;
        std :: cout << " Can't attack because Not had enough Hit Points!";
        std :: cout << std :: endl;
    }
}

void ClapTrap :: beRepaired(unsigned int amount)
{
    if(static_cast<int>(amount)< 0)
    {
        std :: cout <<"ClapTrap "<<this->Name;
        std :: cout <<" Can 't repairs it self with negative number!" << std :: endl;
    }
    else if(this->Energy <= 0)
    {
        std :: cout << "ClapTrap " << this->Name;
        std :: cout << " Can't repairs it self because Not had enough Energy Points!"<<std :: endl;
    }
    else if(this->Hitpoints <= 0)
    {
        std :: cout << "ClapTrap " << this->Name;
        std :: cout << " Can't repairs it self because Not had enough Hits points!"<<std :: endl;
    }
    else
    {
        std :: cout << "ClapTrap " << this->Name;
        std :: cout << " repairs it self with " << amount <<std :: endl;
        this->Hitpoints += amount;
        this->Energy--;
    }

}

void ClapTrap :: takeDamage(unsigned int amount)
{
    if(static_cast<int>(amount)< 0)
    {
        std :: cout << "ClapTrap "<<this->Name;
        std :: cout  <<" Can 't take damage with negative number!" << std :: endl;
    }
    else if(this->Energy <= 0)
    {
        std :: cout << "ClapTrap " << this->Name;
        std :: cout << " Can't take damage because Not had enough Energy Points!"<<std :: endl;
    }
    else if(this->Hitpoints <= 0)
    {
        std :: cout << "ClapTrap " << this->Name;
        std :: cout <<" Can't take a damage it's already dead!"<<std :: endl;
    }
    else
    {
        if(static_cast<int> (amount) <= this->Hitpoints)
            this->Hitpoints -= amount;
        else
            this->Hitpoints = 0;
        std :: cout << "ClapTrap " << this->Name;
        std :: cout <<" take "<< amount <<" point  of damage!"<<std :: endl;
    }
}
