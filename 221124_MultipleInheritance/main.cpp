#include <iostream>

using namespace std;


class RealFather {
public:
	int _age;

public:
	RealFather(int age)
		: _age(age) {}
	

	int GetAge() {
		return _age;
	}
};

class StepFather {
public:
	int _age;

public:
	StepFather(int age)
		: _age(age) {}


	int GetAge() {
		return _age;
	}
};


class Child : public RealFather, public StepFather {
public:
	int _age;

public:
	Child(int realAge, int stepAge, int ownAge)
		: RealFather(realAge), StepFather(stepAge), _age(ownAge) {}

	
	int GetAge() {
		return _age;
	}
};



int main() {

	Child child(50, 45, 13);

	cout << "Child GetAge = " << child.GetAge() << endl;
	cout << "RealFather GetAge = " << child.RealFather::GetAge() << endl;  // child.GetAge( ) �� �ϸ� ��� �θ� Ŭ������ GetAge( )���� ��Ȯ�ϰ� �� �� ���� ��ȣ�� �߻�
	cout << "StepFather GetAge = " << child.StepFather::GetAge() << endl;  // ��ȣ�� �߻�

	return 0;
}