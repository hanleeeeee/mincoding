#include "Unit.h"
#include "UI.h"
#include <ctime>

job_sel u7;
equip u3;
Unit::Unit(std::string n, int h, int w, int d,int c) :name(n), hp(h), weapon(w), defense(d),compatibility(c) {
	u7.start_first();
}


void Unit::getDamage(Unit& attacke,int damage) {

	this->hp -= damage;


	if (this->hp < 0) {
		this->hp = 0;
	}

	std::cout << this->name << "이(가) " << damage << "의 피해를 입었습니다! "
		<< "(남은 HP: " << this->hp << ")" << std::endl;

	if (this->hp <= 0) {
		std::cout << "★ " << this->name << "이(가) 쓰러졌습니다! ★" << std::endl;
	}
	
}

void Unit::Victory(int w1, int d1) {
	
	this->weapon = w1;
	this->defense = d1;
	std::cout << this->name << "의 무기는: " << this->weapon << " 방어구는: " << this->defense << "\n";
}

int Unit::getHp() {
	return hp;
}

void Unit::level_up() {
	this->weapon = this->weapon * 2;
	this->defense = this->defense * 2;
	this->hp = this->hp * 2;
}
void Unit::change_job(std::string name,float c_hp,float c_w,float c_d) {
	u7.level_up(this->hp, this->weapon, this->defense);
	this->name = name;
	this->weapon = this->weapon * c_w;
	this->defense = this->defense * c_d;
	this->hp = this->hp * c_hp;
	
	u7.change_job_result(this->name, this->hp, this->weapon, this->defense);

}

void Unit::upgrade_hp() {
	int hps = this->hp * 2;
	this->hp = hps;
	
}
void Unit::upgrade_weapon() {
	this->weapon = this->weapon * 2;
}
void Unit::upgrade_defense() {
	this->defense = this->defense * 2;
}
void Unit::upgrade_hprare() {
	int hps = this->hp * 1.5;
	this->hp = hps;

}
void Unit::upgrade_weaponrare() {
	this->weapon = this->weapon * 1.5;
}
void Unit::upgrade_defenserare() {
	this->defense = this->defense * 1.5;
}

void Unit::skill_warrior() {
	this->weapon = this->weapon * 0.5;
	this->defense = this->defense * 1.5;
	this->hp = this->hp * 2;
}
void Unit::skill_magician() {
	this->weapon = this->weapon * 2;
	this->defense = this->defense * 0.5;
	this->hp = this->hp * 0.5;
}
void Unit::skill_shooter() {
	this->weapon = this->weapon * 1.5;
	this->defense = this->defense * 0.5;
	this->hp = this->hp * 0.8;
}
void Unit::good_weapon() {
	this->weapon = 300;
	
}
void Unit::good_defense() {
	
	this->defense = 200;
	
}


void Unit::applyRandomUpgrade() {
	// 1. 등급 결정 (0: 일반, 1: 레어, 2: 유니크)
	int grade = std::rand() % 3;

	// 2. 강화 부위 결정 (0: 공격력, 1: 방어력, 2: 체력)
	int part = std::rand() % 2;

	if (grade == 2) { // 유니크 (*2)
		if (part == 0) {
			u3.weapon();
			u3.unique(this->name);
			upgrade_weapon();
		}
		else if (part == 1) {
			u3.defense();
			u3.unique(this->name);
			upgrade_defense();
		}
		
	}
	else if (grade == 1) { // 레어 (*1.5)
		if (part == 0) {
			u3.weapon();
			u3.rare(this->name);
			upgrade_weaponrare();
		}
		else if (part == 1) {
			u3.defense();
			u3.rare(this->name);
			upgrade_defenserare();
		}
		
	}
	else { // 일반 (강화 없음)
		u3.normal(this->name);
	}
}