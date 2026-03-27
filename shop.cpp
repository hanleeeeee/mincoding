#include "shop.h"
#include "UI.h"
#include <iostream>
game u6;
void shop::shop_speak(Unit& u) {
	u6.choose();
	int number;
	std::cin >> number;

	switch (number) {
	case 1:
		u.skill_warrior();
		break;
	case 2:
		u.skill_magician();
		break;
	case 3:
		u.skill_shooter();
		break;
	case 4:
		u.upgrade_hp();

		break;
	case 5:
		u.upgrade_weapon();
		break;
	case 6:
		u.upgrade_defense();
		break;
	case 7:
		u.good_weapon();
		break;
	case 8:
		u.good_defense();
		break;

	}
};


