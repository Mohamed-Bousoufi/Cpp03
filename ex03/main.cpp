#include "DiamondTrap.hpp"

int main ()
{
  DiamondTrap Diamnod1;
  DiamondTrap Diamnod2("second");

  Diamnod1.highFivesGuys();
  Diamnod1.whoAmI();
  Diamnod1.guardGate();
  Diamnod1.attack("one");
  Diamnod2.highFivesGuys();
  Diamnod2.whoAmI();
  Diamnod2.guardGate();
  Diamnod2.attack("one");
}