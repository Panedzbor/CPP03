#include "ClapTrap.hpp"
#include <iostream>

static std::string give_name(void);
static void display_menu(void);
static char get_input(void);

int main(void)
{
    std::string name;
    char input = 0;

    name = give_name();
    ClapTrap CT(name);

    while (input != 'e')
    {
        display_menu();
        input = get_input();
        if (input == '1')
            CT.attack("Random Dude");
        if (input == '2')
            CT.beRepaired(10);
        if (input == '3')
            CT.takeDamage(5);
    }
    return (0);
}

static std::string give_name(void)
{
    std::string name;
    
    std::cout << "Enter ClapTrap's name: ";
    while (!std::getline(std::cin, name) || name.empty())
    {
        std::cin.ignore(1000, '\n');
        std::cout << "Give a valid name: ";
    }
    std::cout << '\n';
    return (name);
}

static void display_menu(void)
{
    std::cout << "Choose the action: \n";
    std::cout << "1: ATTACK\n";
    std::cout << "2: REGAIN\n";
    std::cout << "3: RECEIVE DAMAGE\n";
    std::cout << "e: Exit\n";
    std::cout << '\n';
}

static char get_input(void)
{
    char input = 0;
    
    while (!((input >= '1' && input <= '4') || input == 'e'))
    {
        std::cout << "Enter your choice: ";
        std::cin >> input;
        std::cin.ignore(1000, '\n');
    }
    std::cout << '\n';
    return (input);
}