#include <iostream>
#include <string>

using namespace std;

class Arm {
private:
	string _name;
	int _power;

public:
	Arm(string name)
		: _name(name), _power(0) {}

	string GetName() {
		return _name;
	}

	void SetPower(int strong) {
		_power = strong;
	}

	int GetPower() {
		return _power;
	}

};

class CannonArm : public Arm {
public:
	CannonArm()
		: Arm("CannonArm") {}
};


class LazerArm : public Arm {
public:
	LazerArm()
		: Arm("LazerArm") {}
};


class BombArm : public Arm {
public:
	BombArm()
		: Arm("BombArm") {}
};


class GomuGomuArm : public Arm {
public:
	GomuGomuArm()
		: Arm("�þ�� ������") {}
};

class GadgetArm : public Arm {
public:
	GadgetArm()
		:Arm("ö���� ����Ʈ��") {}
};



class 





// ����Ÿ������ ���� �޾ƾ� �ڽ� Ŭ������ ������ ������ ���� �ʴ´�.
// �׳� ������ �ް� ��ä �ڽ� Ŭ�������� ������ �θ� Ŭ�������� ������
// ���� �Ǹ� ��ĳ������ �Ǵµ� ��ĳ������ �Ǹ� �θ� Ŭ������ �ִ�
// ������� ������ �����ϰ� �ȴ�. ��, �ڽ� Ŭ������ �ִ� �͵��� ������
// �� ���� ����. �̰� �ٷ� ������ �����̴�!
// ����Ÿ������ �ڽ� Ŭ������ �ް� �Ǹ� �ڽ� Ŭ������ �ִ� �����ʹ�
// �״�� ���� �ϸ鼭 �������̴� �� �޴� �ڽ�Ŭ������ �ּҰ����� ������
// �� �ȿ� �ִ� ����鿡 �����ϰ� �Ǵ� ���̹Ƿ� ������ ������ ���� ���̴�.
class Robot {
private:
	string _name;
	Arm& _leftArm;
	Arm& _rightArm;

public:
	Robot(string name, Arm & leftArm, Arm& rightArm)
		:_name(name), _leftArm(leftArm), _rightArm(rightArm) {}

	void Info() {
		cout << "������: " << _leftArm.GetName() << endl;
		cout << "��������: " << _rightArm.GetName() << endl;
	}

	void Attack() {
		cout << _name << " leftArm Power " << _leftArm.GetPower() << "�� ������ ����" << endl;
		cout << _name << " rightArm Power " << _rightArm.GetPower() << "�� ������ ����" << endl;
	}

	void SetPowerLeft(int strong) {
		_leftArm.SetPower(strong);
	}

	void SetPowerRight(int strong) {
		_rightArm.SetPower(strong);
	}
	

};


class CannonArmRobot : public Robot {
public:
	CannonArmRobot(CannonArm& leftArm, CannonArm& rightArm)
		:Robot("ĳ��", leftArm, rightArm) {}

};


class BombArmRobot : public Robot {
public:
	BombArmRobot(BombArm& leftArm, BombArm& rightArm)
		:Robot("��ź", leftArm, rightArm) {}
};


class LazerArmRobot : public Robot {
public:
	LazerArmRobot(LazerArm& leftArm, LazerArm& rightArm)
		:Robot("������", leftArm, rightArm) {}
};

class GomuGomuArmRobot : public Robot {
public:
	GomuGomuArmRobot(GomuGomuArm& leftArm, GomuGomuArm& rightArm)
		: Robot("����", leftArm, rightArm) {}
};


class GadgetArmRobot : public Robot {
public:
	GadgetArmRobot(GadgetArm& leftArm, GadgetArm& rightArm)
		: Robot("����Ʈ", leftArm, rightArm) {}
};


int main() {

	CannonArm cannonLeftArm;
	CannonArm cannonRightArm;

	BombArm bombLeftArm;
	BombArm bombRightArm;

	LazerArm lazerLeftArm;
	LazerArm lazerRightArm;

	GomuGomuArm gomuGomuLeftArm;
	GomuGomuArm gomuGomuRightArm;

	GadgetArm gadgetLeftArm;
	GadgetArm gadgetRightArm;



	CannonArmRobot cannonArmRobot(cannonLeftArm, cannonRightArm);
	BombArmRobot bombArmRobot(bombLeftArm, bombRightArm);
	LazerArmRobot lazerArmRobot(lazerLeftArm, lazerRightArm);
	GomuGomuArmRobot gomuGomuArmRobot(gomuGomuLeftArm, gomuGomuRightArm);
	GadgetArmRobot gadgetArmRobot(gadgetLeftArm, gadgetRightArm);


	cannonArmRobot.Info();
	cout << endl;
	bombArmRobot.Info();
	cout << endl;
	lazerArmRobot.Info();
	cout << endl;
	gomuGomuArmRobot.Info();
	cout << endl;
	gadgetArmRobot.Info();

	cout << endl << endl;

	cannonArmRobot.SetPowerLeft(70);
	cannonArmRobot.SetPowerRight(90);

	bombArmRobot.SetPowerLeft(100);
	bombArmRobot.SetPowerRight(60);

	lazerArmRobot.SetPowerLeft(95);
	lazerArmRobot.SetPowerRight(80);

	gomuGomuArmRobot.SetPowerLeft(75);
	gomuGomuArmRobot.SetPowerRight(80);

	gadgetArmRobot.SetPowerLeft(130);
	gadgetArmRobot.SetPowerRight(110);


	cannonArmRobot.Attack();
	bombArmRobot.Attack();
	lazerArmRobot.Attack();
	gomuGomuArmRobot.Attack();
	gadgetArmRobot.Attack();

	return 0;
}