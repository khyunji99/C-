#pragma once
#include <string>
#include "Monster.h"

class Slime :public Monster {
private:
	int _physicalAttackRegist;

public:
	Slime(std::string name, int health, int attack, int defense, int physicalAttackRegist);

	int GetPhysicalAttackRegist();

	void GetDamage(int attack) override;
};