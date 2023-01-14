#include "Slime.h"
#include <iostream>

using namespace std;

Slime::Slime(std::string name, int health, int attack, int defense, int physicalAttackegist)
	: Monster(name, health, attack, defense), _physicalAttackRegist(physicalAttackegist){}

int Slime::GetPhysicalAttackRegist() {
	return _physicalAttackRegist;
}

void Slime::GetDamage(int attack) {
	cout << "Slime::GetDamage" << endl;

	int attackValue= attack - _defense - _physicalAttackRegist;

	if (attackValue <= 0) {
		attackValue = 0;
	}

	_health -= attackValue;

	if (_health <= 0) {
		Dead();
	}
}