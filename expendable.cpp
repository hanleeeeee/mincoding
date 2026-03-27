#include "expendable.h"
#include "UI.h"
game u5;
void upgrade_hp(Unit& u) {

	u.upgrade_hp();
	u5.heal_hp();
}
void upgrade_attk(Unit& u) {
	u.upgrade_weapon();
	u5.heal_weapon();
}
void upgrade_defense(Unit& u) {
	u.upgrade_defense();
	u5.heal_defense();
}