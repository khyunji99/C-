#pragma once
#include "Monster.h"
#include <string>

class Golem : public Monster {
public:
	Golem(std::string name, int health, int attack, int defense);
};