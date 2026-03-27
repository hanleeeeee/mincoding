#pragma once
#include "Unit.h"


class job {

	std::string name;
	float upgrade_hp;
	float upgrade_w;
	float upgrade_d;
public:
	job(std::string name,float upgrade_hp, float upgrade_w, float upgrade_d);
	//float warrior (Unit& u, std::string name,float upgrade_hp, float upgrade_w, float upgrade_d);
	//void warrior (Unit& u);
	//void magician (Unit& u);
	//void shooter (Unit& u);
	//
	void job_selection(Unit& u, std::string job_select);
};