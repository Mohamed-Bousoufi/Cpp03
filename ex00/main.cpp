#include "ClapTrap.hpp"

int main ()
{
    ClapTrap T("rick");
    ClapTrap B("Morty");

    T.attack("Morty");
    B.attack("Rick");
    T.beRepaired(5);
    B.takeDamage(10);
    B.attack("rick");
    B.beRepaired(5);
    B.takeDamage(0);

}