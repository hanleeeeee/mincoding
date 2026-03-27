#pragma once
#include "Unit.h"
#include <string>
#include <iostream>

class monster : public Unit {
private:
    std::string shape; // 몬스터의 아스키 아트를 저장할 공간 추가

public:
    // 생성자에 shape 매개변수 추가 (기본값 "")
    monster(std::string name, int hp, int weapon, int defense, int compatibility, std::string shape = "");

    // 그림 출력 함수 추가
    void printShape() const { std::cout << shape << std::endl; }
};

// 그리드 생성 함수 선언
#include <array>
std::array<std::array<monster, 3>, 3> createMonsterGrid();