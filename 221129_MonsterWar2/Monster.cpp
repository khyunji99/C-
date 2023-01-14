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

void Monster::GetDamage(int attack) { // ���� ���� ������ ó��
	cout << "Monster::GetDamage" << endl;

	_health -= (attack - _defense);
	
	if (_health <= 0) {
		Dead();
	}
}


void Monster::Dead() {
	cout << _name << "�� ����߽��ϴ�." << endl;
}


void Monster::Attack(Monster& enemy) {
	cout << "Monster Attack" << endl;
	enemy._health -= (_attack - enemy._defense);

	enemy.GetDamage(_attack);

	cout << _name << "�� " << enemy._name << "�� �����ؼ� ������� " << enemy._health << "�� �پ���." << endl;
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

	cout << _name << "�� " << enemy.GetName() << "�� �����ؼ� ������� " << enemy.GetHealth() << "�� �پ���." << endl;
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

	cout << _name << "�� " << enemy.GetName() << "�� �����ؼ� ������� " << enemy.GetHealth() << "�� �پ���." << endl;
}
*/


void Monster::Defense(Monster& enemy) {
	cout << enemy.GetName() << "�� ��� �մϴ�." << endl;
}

void Monster::Run(Monster& enemy) {
	cout << enemy.GetName() << "�� ���� ������ �ݴϴ�." << endl;
}

void Monster::ShowInfo() {
	cout << "�̸� : " << _name << endl;
	cout << "���ݷ� : " << _attack << endl;
	cout << "����� : " << _health << endl;
	cout << "���� : " << _defense << endl;
}