
#ifndef HUMANB_HPP    
#define HUMANB_HPP

#include "./Weapon.hpp"
#include <cstring>
#include <iostream>





class HumanB{ 
    private:
        std::string name;
        Weapon *weapon;
    public:
     HumanB(std::string human);
    void setWeapon(Weapon& weapon);
    void attack(void);
};

#endif