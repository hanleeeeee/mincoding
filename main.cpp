#include <iostream>
#include <memory>
#include <vector>
#include <array>   // 추가 필수!
#include "hero.h"
#include "monster.h"
#include "Battle.h"
#include "job.h"
#include "Unit.h"
#include "quest.h"
int main() {
    Hero hero("용사", 3000, 80, 40, 1);

    

    auto myGrid = createMonsterGrid();


    job job_select(hero.getName(), hero.getHp(), hero.getWeapon(), hero.getdefense());

    std::string job_name;
    std::cin >> job_name;


    job_select.job_selection(hero, job_name);
    //job_select.job_name(hero);





   
    //Unit* raw_monster_ptr[3][3] = { nullptr };
    //std::srand(static_cast<unsigned int>(std::time(nullptr)));
    //// 4. 이중 for문을 돌며 주소값(.get())만 복사
    //for (int i = 0; i < 3; i++) {
    //    for (int j = 0; j < 3; j++) {
    //        raw_monster_ptr[i][j] = &myGrid[i][j];
    //    }
    //}
    hero.applyRandomUpgrade();
    /////////////////////////////////////////////////////////////////////////////
    //std::cout << "\n--- 전투 시작 ---\n" << std::endl;
    //Battle manager;

    //// Battle 클래스의 start 함수가 2차원 배열을 받도록 수정되어 있어야 합니다.
    //manager.start(hero, raw_monster_ptr, 3);
    Quest1(hero);
    Quest2(hero);

    return 0;
}