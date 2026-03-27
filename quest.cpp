#include "quest.h"
#include <string>
#include "hero.h"
#include "UI.h"

notify noti;

void Quest1(Unit& hero) {
    //std::cout << "던전 퀘스트입니다. " << "\n";
	auto myGrid = createMonsterGrid();
    Unit* raw_monster_ptr[3][3] = { nullptr };
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            raw_monster_ptr[i][j] = &myGrid[i][j];
        }
    }

    noti.start_battle();
    Battle manager;

 
    manager.start(hero, raw_monster_ptr, 3);
}

void Quest2(Unit& hero) { //사람이랑 대결하는 것
    noti.murder();
   

    Hero hero2("용사", 3000, 80, 40, 1);
    job job_select(hero2.getName(), hero2.getHp(), hero2.getWeapon(), hero2.getdefense());

    std::string job_name;
    std::cin >> job_name;
    job_select.job_selection(hero2, job_name);

    Battle manager2;
    manager2.start_people(hero, hero2);


}

