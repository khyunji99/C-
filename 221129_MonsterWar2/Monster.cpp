#include "Monster.h"
#include "Dragon.h"
#include "Slime.h"
#include "Ogre.h"
#include <iostream>

using namespace std;

Monster::Monster(std::string name, int health, int attack, int defense)
	: _name(name), _health(health), _attack(attack), _defense(defense) {}

int Monster::GetHealth() {
	return _health;
}

void Monster::SetHealth(int value) {
	_health = value;
}

int Monster::GetDefense() {
	return _defense;
}

std::string Monster::GetName() {
	return _name;
}

void Monster::GetDamage(int attack) { // 맞은 놈이 데미지 처리
	cout << "Monster::GetDamage" << endl;

	_health -= (attack - _defense);
	
	if (_health <= 0) {
		Dead();
	}
}


void Monster::Dead() {
	cout << _name << "이 사망했습니다." << endl;
}


void Monster::Attack(Monster& enemy) {
	cout << "Monster Attack" << endl;
	enemy._health -= (_attack - enemy._defense);

	enemy.GetDamage(_attack);

	cout << _name << "이 " << enemy._name << "을 공격해서 생명력이 " << enemy._health << "로 줄었다." << endl;
}

/*
void Monster::Attack(Slime& enemy) {
	cout << "Slime Attack" << endl;
	/*
	int health = enemy.GetHealth();
	int attack = 0;

	attack = _attack - enemy.GetDefense() - enemy.GetPhysicalAttackRegist();

	if (attack <= 0) {
		attack = 0;
	}

	health -= attack;

	if (health <= 0) {
		enemy.Dead();
	}

	enemy.SetHealth(health);
	*/
/*
	enemy.GetDamage(_attack);

	cout << _name << "이 " << enemy.GetName() << "을 공격해서 생명력이 " << enemy.GetHealth() << "로 줄었다." << endl;
}
*/

/*
void Monster::Attack(Ogre& enemy) {
	cout << "Ogre Attack" << endl;
	/*
	int health = enemy.GetHealth();
	int attack = 0;

	attack = _attack - enemy.GetDefense() - enemy.GetPhysicalAttackRegist();

	if (attack <= 0) {
		attack = 0;
	}

	health -= attack;

	if (health <= 0) {
		enemy.Dead();
	}

	enemy.SetHealth(health);
	*/
/*
	enemy.GetDamage(_attack);

	cout << _name << "이 " << enemy.GetName() << "을 공격해서 생명력이 " << enemy.GetHealth() << "로 줄었다." << endl;
}
*/


void Monster::Defense(Monster& enemy) {
	cout << enemy.GetName() << "을 방어 합니다." << endl;
}

void Monster::Run(Monster& enemy) {
	cout << enemy.GetName() << "을 피해 빠르게 뜁니다." << endl;
}

void Monster::ShowInfo() {
	cout << "이름 : " << _name << endl;
	cout << "공격력 : " << _attack << endl;
	cout << "생명력 : " << _health << endl;
	cout << "방어력 : " << _defense << endl;
}