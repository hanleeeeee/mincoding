#pragma once
#include <iostream>
#include <string>
class Unit {
private:
	std::string name;
	int hp;
	int weapon;
	int defense;
	int compatibility;

public:
	Unit(std::string n, int h, int w, int d,int c);
	virtual ~Unit() = default;
	//virtual void attack(Unit& target);
	virtual void getDamage(Unit& target,int damage);
	virtual void Victory(int w, int d);
	virtual void level_up();

	int getHp();
	int getWeapon() { return weapon; }
	int getdefense() { return defense; }
	int getCompatibility() { return compatibility; }
	std::string getName() { return name; }
	void change_job(std::string name,float h, float w, float d);
	void upgrade_hp();
	void upgrade_weapon();
	void upgrade_defense();
	void upgrade_hprare();
	void upgrade_weaponrare();
	void upgrade_defenserare();
	void skill_warrior();
	void skill_magician();
	void skill_shooter();
	void good_weapon();
	void good_defense();
	void applyRandomUpgrade();
};