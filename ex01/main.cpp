#include " ClapTrap.hpp"

int main()
{
    ClapTrap cp("simo");

    for(int i =0; i < 8; i++)
        cp.attack("hatim");

    cp.takeDamage(5);
    cp.takeDamage(50);
    cp.takeDamage(5);
    cp.beRepaired(2);
    cp.beRepaired(__UINT32_MAX__);
    cp.beRepaired(2);
}