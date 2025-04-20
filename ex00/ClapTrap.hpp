#pragma once

#include <iostream>
#include <cstdlib>

class ClapTrap
{
private:
    std::string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;

public:
    ClapTrap(const std::string &name);
    ~ClapTrap();
    ClapTrap(const ClapTrap &cpy);
    ClapTrap &operator=(const ClapTrap &cpy);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
