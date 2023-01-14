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
		: Arm("늘어나는 고무고무팔") {}
};

class GadgetArm : public Arm {
public:
	GadgetArm()
		:Arm("철통방어 가제트팔") {}
};



class 





// 참조타입으로 값을 받아야 자식 클래스의 데이터 유실이 되지 않는다.
// 그냥 값으로 받게 된채 자식 클래스형의 변수가 부모 클래스형의 변수로
// 들어가게 되면 업캐스팅이 되는데 업캐스팅이 되면 부모 클래스에 있는
// 멤버에만 접근이 가능하게 된다. 즉, 자식 클래스에 있는 것들은 접근을
// 할 수가 없다. 이게 바로 데이터 유실이다!
// 참조타입으로 자식 클래스를 받게 되면 자식 클래스에 있는 데이터는
// 그대로 유지 하면서 참조형이니 그 받는 자식클래스의 주소값으로 접근해
// 그 안에 있는 멤버들에 접근하게 되는 것이므로 데이터 유실이 없는 것이다.
class Robot {
private:
	string _name;
	Arm& _leftArm;
	Arm& _rightArm;

public:
	Robot(string name, Arm & leftArm, Arm& rightArm)
		:_name(name), _leftArm(leftArm), _rightArm(rightArm) {}

	void Info() {
		cout << "왼쪽팔: " << _leftArm.GetName() << endl;
		cout << "오른쪽팔: " << _rightArm.GetName() << endl;
	}

	void Attack() {
		cout << _name << " leftArm Power " << _leftArm.GetPower() << "의 힘으로 공격" << endl;
		cout << _name << " rightArm Power " << _rightArm.GetPower() << "의 힘으로 공격" << endl;
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
		:Robot("캐논", leftArm, rightArm) {}

};


class BombArmRobot : public Robot {
public:
	BombArmRobot(BombArm& leftArm, BombArm& rightArm)
		:Robot("폭탄", leftArm, rightArm) {}
};


class LazerArmRobot : public Robot {
public:
	LazerArmRobot(LazerArm& leftArm, LazerArm& rightArm)
		:Robot("레이저", leftArm, rightArm) {}
};

class GomuGomuArmRobot : public Robot {
public:
	GomuGomuArmRobot(GomuGomuArm& leftArm, GomuGomuArm& rightArm)
		: Robot("고무고무", leftArm, rightArm) {}
};


class GadgetArmRobot : public Robot {
public:
	GadgetArmRobot(GadgetArm& leftArm, GadgetArm& rightArm)
		: Robot("가제트", leftArm, rightArm) {}
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