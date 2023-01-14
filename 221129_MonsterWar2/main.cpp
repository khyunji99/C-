#include "Dragon.h"
#include "Golem.h"
#include "Slime.h"
#include "Ogre.h"
#include "Goblin.h"

int main() {

	Dragon dragonA("�巡��A", 100, 200, 70);
	Dragon dragonB("�巡��B", 150, 100, 80);

	Slime slimeA("������A", 80, 60, 40, 25);
	Slime slimeB("������A", 80, 60, 40, 35);

	Golem golemA("��A", 80, 100, 60);
	Golem golemB("��B", 80, 100, 60);

	Ogre ogreA("ogreA", 70, 90, 60, 40);
	Ogre ogreB("ogreB", 80, 100, 90, 30);

	Goblin goblinA("goblinA", 100, 30, 40, 20);

	dragonA.Attack(dragonB);

	dragonA.Attack(dragonB);

	dragonA.Attack(golemA);

	dragonA.Attack(golemB);

	golemA.Attack(dragonA);
	golemA.Attack(dragonB);

	golemA.Attack(slimeB);
	golemA.Attack(slimeA);

	dragonA.Attack(ogreA);

	dragonB.Attack(ogreB);

	golemA.Attack(goblinA);
	dragonA.Attack(goblinA);











}