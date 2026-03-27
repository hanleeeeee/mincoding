#pragma once

#include <iostream>
#include <string>

// --- [구분 1] 직업 및 성장 관련 클래스 ---
class job_sel {
public:
    void start_first();                                     // 처음 시작
    void level_up(int one, int two, int three);             // 레벨업
    void change_job();                                      // 전직 선택
    void change_job_result(std::string name, float hp, float weapon, float defense); // 전직 결과
    void warrior();                                         // 전사 직업 정보
    void magician();                                        // 마법사 직업 정보
    void shooter();                                         // 궁수 직업 정보
};

// --- [구분 2] 장비 및 아이템 등급 관련 클래스 ---
class equip {
public:
    void weapon();                                          // 무기 정보
    void defense();                                         // 방어구 정보
    void unique(std::string name);                          // 유니크 아이템 출력
    void rare(std::string name);                            // 레어 아이템 출력
    void normal(std::string name);                          // 노멀 아이템 출력
};

// --- [구분 3] 게임 시스템 및 전투 UI 관련 클래스 ---
class game {
public:
    void start_battle(int round);                           // 배틀 시작
    void start_round(int n);                                // 라운드 시작
    void start_down(std::string str);                       // 하강/추락 시작
    void pickup();                                          // 아이템 획득
    void fortify(std::string name);                         // 강화
    void rob(int one, int two);                             // 강탈 시도
    void rob_d(int one, int two);                           // 강탈 결과
    void not_that(int one);                                 // 잘못된 선택 1
    void not_that2(int one);                                // 잘못된 선택 2
    void heal_hp();                                         // 체력 회복
    void heal_weapon();                                     // 무기 수리
    void heal_defense();                                    // 방어구 수리
    void choose();                                          // 선택지 UI
    void current_state(int hp, int weapon, int defense, int comodility); // 상태창
    void shop();                                            // 상점 UI
    void clear();                                           // 화면 클리어
};

class notify {
public:
    void murder();
    void start_battle();
};