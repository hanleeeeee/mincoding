#pragma once
#include "Unit.h"

class Hero : public Unit {
    std::string n;
    int h;
    int w;
    int d;
    int c;
public:
    
    Hero(std::string n, int h, int w, int d,int c);

    //void attack(Unit & target) override;
    //void Victory(Unit& tareget) override;
    std::string getName() { return n; }
    int getHp() { return h; }
    int getWeapon() { return w; }
    int getdefense() { return d; }
};