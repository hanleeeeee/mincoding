#pragma once
#include <iostream>
#include "Battle.h"

class policy {
public:
	int calculateDamage(Unit& u, int damage);
	std::pair<int,int> drop(Unit& win, Unit&dead);
};