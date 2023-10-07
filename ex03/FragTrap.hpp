#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    private:
    public :
        FragTrap();
        FragTrap(const std :: string Name);
        FragTrap(FragTrap &copy);
        void operator = (FragTrap &copy);
        ~FragTrap();

        void attack(const std :: string &target);
        void highFivesGuys(void);
};

#endif