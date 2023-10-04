#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
class ClapTrap 
{
    protected :
        std :: string name;
        int Hitpoints;
        int Energy;
        int Attackdamge;

    public :

    // cononical class form
            ClapTrap();
            ClapTrap(std :: string Name);
            ClapTrap(ClapTrap &copy);
            void operator =(ClapTrap &copy);
            ~ClapTrap();
     
            void attack(const std::string& target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);

};
#endif