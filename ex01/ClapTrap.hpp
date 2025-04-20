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
    ClapTrap(const std::string &name, unsigned int hit = 10, unsigned int energy = 10, unsigned int attack = 0);
    ~ClapTrap();
    ClapTrap(const ClapTrap &cpy);
    ClapTrap &operator=(const ClapTrap &cpy);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    const std::string &gitName () const;
    void setName(const std::string& name);
};