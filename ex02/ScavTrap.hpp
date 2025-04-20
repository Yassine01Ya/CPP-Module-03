#pragma once

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(const std::string &name);
    ~ScavTrap();
    ScavTrap &operator=(const ScavTrap &cpy);
    ScavTrap(const ScavTrap &cpy);
    void guardGate();
    void attack(const std::string &target);
};