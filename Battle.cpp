#include "Battle.h"
#include "policy.h"
#include "UI.h"
#include "shop.h"
#include "monster.h"
job_sel u8;
game ui;
shop sh;
void Battle::start(Unit& hero, Unit* monsters[3][3], int stageCount) {
    // k는 스테이지(행)를 의미 (0, 1, 2)
    for (int k = 0; k < stageCount; k++) {
        
        int round = 1;
        int deadCount = 0;

        // 해당 스테이지(k구역)의 몬스터 3마리가 모두 죽을 때까지 반복
        ui.start_battle(round);
        while (hero.getHp() > 0) {
            bool allDead = true;

            // 1. 현재 스테이지 몬스터들이 살아있는지 체크 (항상 루프 시작 시 수행)
            for (int i = 0; i < 3; i++) {
                if (monsters[k][i] != nullptr && monsters[k][i]->getHp() > 0) {
                    allDead = false;
                    break;
                }
            }
            
            // 모두 죽었다면 상점 들르고 스테이지 종료
            if (allDead) {
                if (k == stageCount - 1) {
                    ui.clear();
                    return;
                }
                //if (round == stageCount+1) return ;
                ui.shop();
                sh.shop_speak(hero);
                break;
            }

            ui.start_round(round);

        
            for (int i = 0; i < 3; i++) {
                if (monsters[k][i] != nullptr && monsters[k][i]->getHp() > 0) {
                    proceedTurn(hero, *monsters[k][i]);
                    monster* m = static_cast<monster*>(monsters[k][i]);
                    m->printShape();
             
                    if (monsters[k][i]->getHp() <= 0) {
                        deadCount++;
                        ui.start_down(monsters[k][i]->getName());
                        ui.pickup();

                        policy combatdrop;
                        auto loot = combatdrop.drop(hero, *monsters[k][i]);
                        hero.Victory(static_cast<int>(loot.first), static_cast<int>(loot.second));

              
                        if (deadCount == 3) {
         
                            hero.level_up();
                            u8.level_up(hero.getHp(), hero.getWeapon(), hero.getdefense());
                        }
                    }
                    
                }
            }

    
            for (int i = 0; i < 3; i++) {
                if (monsters[k][i] != nullptr && monsters[k][i]->getHp() > 0 && hero.getHp() > 0) {
                    proceedTurn(*monsters[k][i], hero);

                    if (hero.getHp() <= 0) {
                        ui.start_down(hero.getName());
                        return;
                    }
                }
            }

            ui.current_state(hero.getHp(), hero.getWeapon(), hero.getdefense(), hero.getCompatibility());
            round++;
            std::cout << "--------------------------\n";
        }
    }
}


void Battle::start_people(Unit& hero, Unit&enemy) {
    // k는 스테이지(행)를 의미 (0, 1, 2)
    
        // 해당 스테이지(k구역)의 몬스터 3마리가 모두 죽을 때까지 반복
    int round = 1;
    while (hero.getHp() > 0) {
           
        ui.start_round(round);

        proceedTurn(hero, enemy);

        if (enemy.getHp() <= 0) {
            ui.start_down("살인자");
            return;
        }

        proceedTurn(enemy, hero);

        if (hero.getHp() <= 0) {
            ui.start_down(hero.getName());
            return;
        }
            
        ui.current_state(hero.getHp(), hero.getWeapon(), hero.getdefense(), hero.getCompatibility());
        round++;
        std::cout << "--------------------------\n";
    }
    
}


void Battle::proceedTurn(Unit& attacker, Unit& defender) {
	int attk_damage = attacker.getWeapon();

	if (attacker.getCompatibility() == 2 && defender.getCompatibility() == 0) {
		attk_damage = attacker.getWeapon() * 2;
		ui.fortify(attacker.getName());
	
	}
	else if (attacker.getCompatibility() == 1 && defender.getCompatibility() == 2) {
		attk_damage = attacker.getWeapon() * 2;
		ui.fortify(attacker.getName());
	}
	else if (attacker.getCompatibility() == 0 && defender.getCompatibility() == 1) {
		attk_damage = attacker.getWeapon() * 2;
		ui.fortify(attacker.getName());
	}
    

	//int damage = attk_damage - defender.getdefense();
	//if (damage < 0) {
	//	damage = 0;

	//}
	policy combatPolicy;


	int finalDamage = combatPolicy.calculateDamage(defender, attk_damage);


	defender.getDamage(attacker, finalDamage);
	


}