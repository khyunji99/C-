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
	cout << "RealFather GetAge = " << child.RealFather::GetAge() << endl;  // child.GetAge( ) 만 하면 어느 부모 클래스의 GetAge( )인지 정확하게 알 수 없어 모호함 발생
	cout << "StepFather GetAge = " << child.StepFather::GetAge() << endl;  // 모호함 발생

	return 0;
}