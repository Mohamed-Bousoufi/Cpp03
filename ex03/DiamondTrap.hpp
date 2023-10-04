#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
    private : 
                std :: string name;
    public :
        DiamondTrap();
        DiamondTrap(const std :: string &Name);
        DiamondTrap(DiamondTrap &copy);
        void operator=(DiamondTrap &copy);
        ~DiamondTrap();

        void attack( const std :: string &target);
        void whoAmI();
};

#endif