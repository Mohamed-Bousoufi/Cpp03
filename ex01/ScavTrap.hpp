#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap();
        ScavTrap(std :: string Name);
        ScavTrap(ScavTrap &copy);
        void attack(const std :: string &target);
        void operator = (ScavTrap &copy);
        ~ScavTrap();

        void guardGate();
};

#endif