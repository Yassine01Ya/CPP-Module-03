#include " ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
}

ClapTrap::~ClapTrap()
{
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
    *this = cpy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cpy)
{
    if (this == &cpy)
        return *this;
    name = cpy.name;
    hitPoints = cpy.hitPoints;
    energyPoints = cpy.energyPoints;
    attackDamage = cpy.attackDamage;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (energyPoints == 0)
    {
        std::cout << "ClapTrap " << name << " No energy left to attack" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints == 0)
    {
        std::cout << "ClapTrap " << name << " No health left" << std::endl;
        return;
    }
    if (amount > hitPoints)
        hitPoints = 0;
    else
        hitPoints -= amount;
    std::cout << "ClapTrap " << name << " took  " << amount << " damage, hit Point is " << hitPoints << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints == 0)
    {
        std::cout << "ClapTrap " << name << " No energy left to repair" << std::endl;
        return;
    }
    energyPoints--;
    size_t tmp = amount;
    tmp += hitPoints;
    if (tmp >= __UINT32_MAX__)
        hitPoints = __UINT32_MAX__;
    else
        hitPoints = tmp;
    std::cout << "ClapTrap " << name << " repaired amount " << amount << ", hit point is " << hitPoints << std::endl;
}
