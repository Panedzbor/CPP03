#pragma once
#ifndef CT_H
#define CT_H

# include <string>

class ClapTrap {
    private:
        std::string name;
        unsigned int hitPts;
        unsigned int energyPts;
        unsigned int attackDmg;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& original);
        ClapTrap& operator=(const ClapTrap& original);
        ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif