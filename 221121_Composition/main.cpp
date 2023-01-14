#include <iostream>
#include <string.h>

using namespace std;

class Wheel {
private:
	string _modelName;

public:
	Wheel(string name)
		: _modelName(name) {}

	void Info() {
		cout << _modelName << " Wheel" << endl;
	}
};


class Car {
private:
	Wheel _wheel;

public:
	Car(string name)
		: _wheel(name) {}

	void Info() {
		_wheel.Info();
	}
};


int main() {

	Car car("금호 타이어");


	car.Info();


	return 0;
}