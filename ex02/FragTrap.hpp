#pragma once

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(std::string name);
    FragTrap(const FragTrap &cpy);
    FragTrap &operator=(const FragTrap &cpy);
    ~FragTrap();
    void attack(const std::string &target);
    void highFivesGuys(void);
};