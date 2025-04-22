#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    FragTrap cp("simo");
    // ScavTrap c("simo");

    for(int i =0; i < 3; i++)
        cp.attack("hatim");

    for(int i =0; i < 3; i++)
        cp.takeDamage(12);
    cp.takeDamage(2);
    for(int i =0; i < 3; i++)
        cp.beRepaired(40);
    cp.beRepaired(__UINT32_MAX__);
    cp.beRepaired(2);
    cp.highFivesGuys();
}