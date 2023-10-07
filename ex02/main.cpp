#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
  FragTrap s("milan");
  s.attack("inter");
  s.beRepaired(50);
  s.takeDamage(13);

}