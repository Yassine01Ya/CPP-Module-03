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
    const std::string &getName () const;
    void setName(const std::string& name);
    unsigned int getHitPoints() const;
    void setHitPoints(unsigned int hp);
    unsigned int getEnergyPoints() const;
    void setEnergyPoints(unsigned int ep);
    unsigned int getAttackDamage() const;
    void setAttackDamage(unsigned int ad);

};