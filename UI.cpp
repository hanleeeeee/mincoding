#include "UI.h"

void game::start_battle(int round){

	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$제 "<<round<<"던전 전투가 시작되었습니다 $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n ";
}

void game::start_round(int round) {
	std::cout << "[" << round << " 라운드] " << "\n ";

}
	
void game::start_down(std::string n) {
	std::cout << n << "가 쓰러졌다." << "\n";
}

void game:: pickup() {
	std::cout << "\n" << "!!!!!!!!!!!!!!!!!!!!!영웅 호걸의 시간이다!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << "\n";
}

void game::fortify(std::string n) {
	std::cout <<"=★" << n << "(이)가 2배의 힘을 얻게 됩니다!★= " << "\n";
}

void game::rob(int one, int two) {
std::cout << "더 좋은 무기를 발견했습니다! 무기 강탈함: " << one << "->" << two << "\n";
}
void game::rob_d(int one, int two) {
	std::cout << "더 좋은 방어구를 발견했습니다! 방어구 강탈함: " << one << "->" << two << "\n";
}
void game::not_that(int one) {
	std::cout << "무기가 지금 것보다 별로라서 강탈 안함: " << one << "\n";
}
void game::not_that2(int one) {
	std::cout << "방어구가 지금 것보다 별로라서 강탈 안함: " << one << "\n";
}

void job_sel::start_first()
{
	std::cout << "자 유닛이 생성됩니다. " << "\n";
}
void job_sel::level_up(int one, int two,int three)
{
	std::cout << "@@@용사가 레벨업! 현재 체력은: " << one << " /무기는: " << two <<" /방어구는: "<<three<<"\n";
}
void job_sel::change_job()
{
	std::cout << "@@@@용사의 직업이 결정된다@@@(warrior, magician, shooter중 하나 선택) "<<"\n";
}
void job_sel::change_job_result(std::string name, float hp, float weapon, float defense)
{
	std::cout << "@@@@용사의 직업이 결정되었다.@@@/ 직업은: " <<name<<" /HP: "<<hp<<" /공격력: "<<weapon<<" /방어력: "<<defense<<"\n";
}

void game::heal_hp() {
	std::cout << "체력 2배가 되는 포션을 마셨습니다."<<"\n";
}
void game::heal_weapon() {
	std::cout << "공격력이 2배가 되는 포션을 마셨습니다."<<"\n";
}
void game::heal_defense() {
	std::cout << "방어력이 2배가 되는 포션을 마셨습니다."<<"\n";
}
void game::choose() {
	std::cout << "상점에서 어떤 것을 사고 싶을지 정하세요 (1: Warrior스킬, 2: Magician 스킬, 3: Shooter 스킬, 4: HP 회복 포션, 5: 공격력 강화 포션, 6: 방어력 강화 포션, 7: 강한 무기, 8: 좋은 방어구) :" << "\n";

}
void game::current_state(int hp, int weapon, int defense, int comodility) {
	std::cout << "현재 상태: 체력: " << hp << " 공격력: " << weapon << " 방어구: " << defense << " 상성: " << comodility << "\n";
}
void equip::weapon() {
	std::cout << "{무기}: ";
}
void equip::defense() {
	std::cout << "{방어구}: ";
}


void equip::unique(std::string name) {
	std::cout << "[" << name << "] 유니크 장비 장착! (능력치 2배)\n";
}
void equip::rare(std::string name) {
	std::cout << "[" << name << "] 레어 장비 장착! (능력치 1.5배)\n";
}
void equip::normal(std::string name) {
	std::cout << "{없음}: [" << name << "] 일반 장비 장착! \n";
}

void game::shop() {
	std::cout << "\n구역 클리어! 상점으로 이동합니다.\n";;\
}
void game::clear() {
	std::cout << "던전 클리어~";
}
void job_sel::warrior() {
	std::cout << "전사를 선택 " << "\n";
}
void job_sel::magician() {
	std::cout << "마법사를 선택 " << "\n";
}
void job_sel::shooter() {
	std::cout << " 궁사를 선택 " << "\n";
}

void notify::murder() {
	std::cout << "살인자랑 싸워야하는 퀘스트 입니다. 용의자 누구랑 싸우시겠습니다. (1: warrior, 2: magician, 3: shooter (입력하세요): " << "\n";
}

void notify::start_battle() {
	std::cout << "\n--- 전투 시작 ---\n" << std::endl;
}