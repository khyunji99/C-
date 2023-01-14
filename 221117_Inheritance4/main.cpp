#include <iostream>

using namespace std;

class Parent {
private:
	int _value;
	int _value2;

public:
	Parent()
	{
		cout << "Parent �⺻ ������" << endl;
	}

	Parent(int value)
		: _value(value), _value2(0) {
		cout << "Parent ���ڸ� 1�� �޴� ������" << endl;
	}

	Parent(int value, int value2)
		: _value(value), _value2(value2) {
		cout << "Parent ���ڸ� 2�� �޴� ������" << endl;
	}

	~Parent() {
		cout << "Parent �Ҹ���" << endl;
	}
};


class Child : public Parent {
private:
	int _value3;

public:
	Child()
		: Parent(0, 0), _value3(0) {
		cout << "Child �⺻ ������" << endl;
	}

	Child(int value, int value2, int value3)
		: Parent(value, value2), _value3(value3) {
		cout << "Child ���ڸ� 2�� �޴� ������" << endl;
	}

	Child(int value)
		: Parent(value), _value3(0) {
		cout << "Child ���ڸ� 1�� �޴� ������" << endl;
	}

	~Child() {
		cout << "Child �Ҹ���" << endl;
	}
};


int main() {


	//Child child;

	Child child2(10);

	//Child child3(20, 30, 40);

	return 0;
}