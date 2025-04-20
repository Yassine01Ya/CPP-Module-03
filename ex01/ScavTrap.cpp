#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, 100, 50, 20)
{
}
ScavTrap::~ScavTrap()
{
    std::cout << "Destraction for ScavTrap " << gitName() << std::endl;
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
