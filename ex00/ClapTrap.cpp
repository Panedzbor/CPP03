#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : name(name), hitPts(10), energyPts(10), attackDmg(0) 
{
    std::cout << "ClapTrap constructor called\n";
    std::cout << "\n";
}

ClapTrap::ClapTrap(const ClapTrap& original)
{
    (void)original;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& original)
{
    (void)original;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called\n";
}

void ClapTrap::attack(const std::string& target)
{
    if (hitPts && energyPts)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing him to loose " << hitPts << " hit points!\n";
        energyPts--;
    }
    else if (!hitPts)
        std::cout << "I am dead :(\n";
    else
        std::cout << "No energy to attack!\n";
    std::cout << name << "'s energy: " << energyPts << "\n";
    std::cout << "\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPts)
    {
        std::cout << "ClapTrap " << name << " regains " << amount << " hit points!\n";
        hitPts += amount;
        energyPts--;
    }
    else
        std::cout << "No energy to regain!\n";
    std::cout << name << "'s hit points: " << hitPts << "\n";
    std::cout << name << "'s energy: " << energyPts << "\n";
    std::cout << "\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " loses " << amount << " hit points!\n";
    if (hitPts >= amount)
        hitPts -= amount;
    else
        hitPts = 0;
    std::cout << name << "'s hit points: " << hitPts << "\n";
    std::cout << "\n";
}