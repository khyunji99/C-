#include <iostream>

using namespace std;

class Parent {
private:
	int _value;
	int _value2;

public:
	Parent()
	{
		cout << "Parent 기본 생성자" << endl;
	}

	Parent(int value)
		: _value(value), _value2(0) {
		cout << "Parent 인자를 1개 받는 생성자" << endl;
	}

	Parent(int value, int value2)
		: _value(value), _value2(value2) {
		cout << "Parent 인자를 2개 받는 생성자" << endl;
	}

	~Parent() {
		cout << "Parent 소멸자" << endl;
	}
};


class Child : public Parent {
private:
	int _value3;

public:
	Child()
		: Parent(0, 0), _value3(0) {
		cout << "Child 기본 생성자" << endl;
	}

	Child(int value, int value2, int value3)
		: Parent(value, value2), _value3(value3) {
		cout << "Child 인자를 2개 받는 생성자" << endl;
	}

	Child(int value)
		: Parent(value), _value3(0) {
		cout << "Child 인자를 1개 받는 생성자" << endl;
	}

	~Child() {
		cout << "Child 소멸자" << endl;
	}
};


int main() {


	//Child child;

	Child child2(10);

	//Child child3(20, 30, 40);

	return 0;
}