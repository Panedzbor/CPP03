#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called\n";
    hitPts = 100;
    energyPts = 50;
    attackDmg = 20;
    std::cout << "\n";
}

ScavTrap::ScavTrap(const ScavTrap& original)
{
    (void)original;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& original)
{
    (void)original;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called\n";
}

void ScavTrap::attack(const std::string& target)
{
    if (hitPts && energyPts)
    {
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing him to loose " << hitPts << " hit points!\n";
        energyPts--;
    }
    else if (!hitPts)
        std::cout << "I am dead :(\n";
    else
        std::cout << "No energy to attack!\n";
    std::cout << name << "'s energy: " << energyPts << "\n";
    std::cout << "\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is in Gate keeper mode\n";
    std::cout << "\n";
}