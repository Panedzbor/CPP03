#pragma once
#ifndef ST_H
#define ST_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    private:
        ScavTrap();
    public:
        ScavTrap(std::string name);    
        ScavTrap(const ScavTrap& ST);
        ScavTrap& operator=(const ScavTrap& ST);
        ~ScavTrap();

        void attack(const std::string& target);
        void guardGate();
};

#endif