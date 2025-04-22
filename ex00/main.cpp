#include "ClapTrap.hpp"

int main()
{
    ClapTrap cp("simo");

    // for(int i =0; i < 8; i++)
        cp.attack("hatim");

    for(int i =0; i < 3; i++)
        cp.takeDamage(3);
    cp.takeDamage(2);
    cp.takeDamage(2);
    // cp.takeDamage(5);
    for(int i =0; i < 3; i++)
        cp.beRepaired(2);
    cp.beRepaired(__UINT32_MAX__);
    // cp.beRepaired(2);
}