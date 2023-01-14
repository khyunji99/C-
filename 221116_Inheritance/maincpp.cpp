#include <iostream>
#include <string>

using namespace std;



class Math2 {
public:
	int add(int a, int b) {
		return a + b;
	}

	int sub(int a, int b) {
		return a - b;
	}

	int mul(int a, int b) {
		return a * b;
	}

};


class ExtMath2 : public Math2 {
public:
	float div(int a, int b) {
		return a / (float)b;
	}
};


int main() {

	int a = 20;
	int b = 30;

	Math2 math2;

	cout << a << " + " << b << " = " << math2.add(a, b) << endl;



	ExtMath2 extMath;

	cout << a << " - " << b << " = " << extMath.sub(a, b) << endl;

	cout << a << " / " << b << " = " << extMath.div(a, b) << endl;


	return 0;
}