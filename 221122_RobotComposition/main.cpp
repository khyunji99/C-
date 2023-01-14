#include <iostream>
#include <string>

using namespace std;

class Arm {
private:
	char _type;
	string _name;

public:
	Arm(string name, char type)
		: _name(name), _type(type) {}

	string GetName() {
		return _name;
	}

	char GetType() {
		return _type;
	}
};


class CannonArm : public Arm {
public:
	CannonArm()
		: Arm("CannonArm", 'C') {}
};


class LazerArm : public Arm {
public:
	LazerArm()
		: Arm("LazerArm", 'L') {}
};


class BombArm : public Arm {
public:
	BombArm()
		: Arm("BombArm", 'B') {}
};


class GomuArm : public Arm {
public:
	GomuArm()
		: Arm("GomuArm", 'G') {}
};


class Robot {
private:
	string _name;
	Arm* _leftArm;
	Arm* _rightArm;

public:
	Robot(string name, Arm * leftArm, Arm* rightArm)
		: _name(name), _leftArm(leftArm), _rightArm(rightArm) {}

	
	void Info() {
		cout << "ÀÌ¸§ : " << _name << endl;
		cout << "¿ÞÂÊ ÆÈ : " << _leftArm->GetName() << endl;
		cout << "¿À¸¥ÂÊ ÆÈ : " << _rightArm->GetName() << endl;
	}


	void SetLeftArm(Arm* larm) {
		_leftArm = larm;
	}

	void SetRightArm(Arm* rarm) {
		_rightArm = rarm;
	}

	void SetName(string name) {
		_name = name;
	}
};



int main() {

	CannonArm cannonArm;
	LazerArm lazerArm;
	BombArm bombArm;
	GomuArm gomuArm;

	Robot connonArmRobot("cannonArmRobot", & cannonArm, &cannonArm);
	Robot lazerArmRobot("lazerArmRobot", &lazerArm, &lazerArm);
	Robot bombArmRobot("bombArmRobot", &bombArm, &bombArm);
	Robot gomuArmRobot("gomuArmRobot", &gomuArm, &gomuArm);

	Robot leftCannonRightBombArmRobot("lCannonRBombArmRobot", & cannonArm, &bombArm);
	Robot leftGomuRightLazerArmRobot("lGomuRLazerArmRobot", & gomuArm, &lazerArm);

	connonArmRobot.Info();
	cout << endl;
	lazerArmRobot.Info();
	cout << endl;
	bombArmRobot.Info();
	cout << endl;
	gomuArmRobot.Info();
	cout << endl;
	leftCannonRightBombArmRobot.Info();
	cout << endl;
	leftGomuRightLazerArmRobot.Info();

	leftCannonRightBombArmRobot.SetLeftArm(&lazerArm);
	leftCannonRightBombArmRobot.SetRightArm(&cannonArm);
	leftCannonRightBombArmRobot.SetName("lLazerRCannonArmRobot");

	cout << endl;

	leftCannonRightBombArmRobot.Info();

	return 0;
}