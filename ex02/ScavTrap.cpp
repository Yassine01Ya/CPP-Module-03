#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "Constructer for ScavTrap " << getName() << std::endl;
}
ScavTrap::~ScavTrap()
{
    std::cout << "Destructer for ScavTrap " << getName() << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &cpy)
{
    if (this == &cpy)
        return *this;
    this->ClapTrap::operator=(cpy);
    return *this;
}
ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy) {}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    unsigned int energyPoints = getEnergyPoints();
    unsigned int hitPoints = getHitPoints();
    if (energyPoints == 0 && hitPoints == 0)
    {
        std::cout << "ClapTrap " << getName() << " No energy point or hit point left to attack" << std::endl;
        return;
    }
    energyPoints--;
    getEnergyPoints();
    std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}