#include <iostream>

using namespace std;


class Heart {
private:
	float _heartRate;

public:
	Heart(float rate)
		: _heartRate(rate)
	{
		cout << "---- Heart 생성자" << endl;
	}

	~Heart() {
		cout << "---- Heart 소멸자" << endl;
	}


	void ShowInfo() {
		cout << _heartRate << "로 심장이 뛰고 있습니다." << endl;
	}
};


class Eye {
private:
	float _sight;

public:
	Eye(float sight)
		: _sight(sight)
	{
		cout << "---- Eye 생성자" << endl;
	}

	~Eye() {
		cout << "---- Eye 소멸자" << endl;
	}


	void ShowStatus() {
		cout << _sight << "의 시력을 가지고 있습니다." << endl;
	}
};



class Human {
private:
	Heart _heart;
	Eye _leftEye, _rightEye;

public:
	Human(float heartRate, float leftSight, float rightSight)
		: _heart(heartRate), _leftEye(leftSight), _rightEye(rightSight)
	{
		cout << "---- Human 생성자" << endl;
	}

	~Human() {
		cout << "---- Human 소멸자" << endl;
	}


	void CheckHealthStatus() {
		_heart.ShowInfo();
		
		cout << "왼쪽 눈";
		_leftEye.ShowStatus();

		cout << "오른쪽 눈";
		_rightEye.ShowStatus();
	}
};



int main() {
	
	// Composition : 포함된 객체가 생명주기를 같이 할때 (강한 결합)
	// 포함되는 생성자가 먼저 생성되고 포함하는 생성자는 마지막에
	// 생성된다. 반대로 소멸될 때는 포함하는 생상자가 먼저 소멸되고
	// 포함되는 생성자가 나중에 소멸된다.

	cout << "Human 객체 생성" << endl;

	{
		Human human(60, 1.5f, 1.3f);

		human.CheckHealthStatus();
	}

	cout << "프로그램 종료" << endl;


	return 0;
}