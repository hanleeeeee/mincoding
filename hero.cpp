#include "hero.h"

Hero::Hero(std::string name, int hp, int weapon, int defense,int compatibility) :Unit(name, hp, weapon, defense,compatibility) {
	std::cout << "★ 영웅 [" << name << "] 참전! ★ " << std::endl;
}

//void Hero::attack(Unit& target) {
//	std::cout << "[영웅의 일격!] "<<"\n";
//	Unit::attack(target);
//}

//void Hero::Victory(Unit& target) {
//	std::cout << Unit::getName() << "(이)가 "<<target.getName()<<"노획 드간다~드가자~~" << "\n";
//	Unit::Victory(target);
//}