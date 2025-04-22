#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "Constructer for FragTrap " << name << std::endl;

}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy)
{
    std::cout << "Destructer for FragTrap " << name << std::endl;

}

FragTrap &FragTrap::operator=(const FragTrap &cpy)
{
    if (this != &cpy)
    {
        setName(cpy.getName());
        setHitPoints(cpy.getHitPoints());
        setEnergyPoints(cpy.getEnergyPoints());
        setAttackDamage(cpy.getAttackDamage());
    }
    std::cout << "Copy assignement for FragTrap " << getName() << std::endl;
        return *this;
}

FragTrap::~FragTrap()
{
}

void FragTrap::attack(const std::string &target)
{
    unsigned int EnergyPoints = getEnergyPoints();
    unsigned int HitPoints = getHitPoints();
    if (EnergyPoints != 0 && HitPoints != 0)
    {
        EnergyPoints--;
        setEnergyPoints(EnergyPoints);
        std::cout << "FragTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!\n";
    }
    else
    {
        std::cout << "FragTrap " << getName() << " has no more Energy Points or Hit Points\n";
    }
}
void FragTrap::highFivesGuys(void)
{
unsigned int EnergyPoints = getEnergyPoints();
    unsigned int HitPoints = getHitPoints();
    if (EnergyPoints != 0 && HitPoints != 0)
    {
        EnergyPoints--;
        setEnergyPoints(EnergyPoints);
        std::cout << "FragTrap " << getName() << " is kindly requesting a high fives!\n";
    }
    else
    {
        std::cout << "FragTrap " << getName() << " has no more Energy Points or Hit Points\n";
    }
}