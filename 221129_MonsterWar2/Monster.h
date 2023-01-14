#pragma once
#include <string>

class Slime;
class Golem;
class Dragon;
class Ogre;

class Monster {
protected:
	std::string _name;
	int _health;
	int _attack;
	int _defense;

public:
	Monster(std::string name, int health, int attack, int defense);

	int GetHealth();
	void SetHealth(int value);
	int GetDefense();
	std::string GetName();

	virtual void GetDamage(int attack); // 데미지 가상함수

	void Attack(Monster& enemy);
	/*
	void Attack(Slime& enemy);
	void Attack(Ogre& enemy);
	*/

	void Defense(Monster& enemy);
	void Run(Monster& enemy);
	void ShowInfo();
	void Dead();


};