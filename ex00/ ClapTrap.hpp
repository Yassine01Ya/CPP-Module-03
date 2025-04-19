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

class  ClapTrap2
{
protected:
    int a;
public:
     ClapTrap2(/* args */);
    ~ ClapTrap2();
};



class Derived : private ClapTrap, public ClapTrap2
{
public:
    void foo()
    {
        a = 10;
    };
};

class  Derived2 : Derived
{
public:
    void foo2()
    {
        a = 10;
    };
};
