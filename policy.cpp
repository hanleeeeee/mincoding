#include "policy.h"
#include <iostream>
#include "UI.h"

game ui2;
int policy::calculateDamage(Unit& u, int dam) {
    int damage = dam - u.getdefense();

    if (damage < 0) damage = 0; // 데미지가 마이너스면 0으로 처리
    return damage;
}

std::pair<int,int> policy::drop(Unit& win, Unit& dead) {
	int weapon = 0;
	int defense = 0;

	if (win.getWeapon() < dead.getWeapon()) {
		ui2.rob(win.getWeapon(), dead.getWeapon());
		
		weapon = dead.getWeapon();
	}
	else {
		ui2.not_that(win.getWeapon());
		weapon = win.getWeapon();
	}


	if (win.getdefense() < dead.getdefense()) {
		ui2.rob_d(win.getdefense(), dead.getdefense());
		
		defense = dead.getdefense();
	}
	else {
		ui2.not_that2(win.getdefense());
		defense = win.getdefense();
	}
	return { weapon,defense };
}