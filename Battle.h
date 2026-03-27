#pragma once
#include "Unit.h"

class Battle {
public:
	void start(Unit& hero, Unit* monsters[3][3], int monsterCount);
	void start_people(Unit& hero, Unit& enemy);
	void proceedTurn(Unit& attacker, Unit& defender);
};