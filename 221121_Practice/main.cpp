#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

// Human 클래스에 Heart, Eye, Watch, SmartPhone 객체를 
// 다 포함시켜 작동시키기

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



class Watch {
private:
	string _color;

public:
	Watch(string color)
		: _color(color)
	{
		cout << "---- Watch 생성자" << endl;
	}

	~Watch() {
		cout << "---- Watch 소멸자" << endl;
	}

	void ShowCurrentTime() {
		cout << "[ " << _color << " 시계 현재 시간 ]" << endl;

		time_t timer;
		struct tm* t;

		timer = time(NULL);    // 현재 시간
		t = localtime(&timer);

		cout << t->tm_hour << "시 " << t->tm_min << "분 " << t->tm_sec << "초 입니다." << endl << endl;
	}
};


class SmartPhone {
private:
	string _brand;
	string _callNumber;

public:
	SmartPhone(string brand, string callNumber)
		: _brand(brand), _callNumber(callNumber)
	{
		cout << "---- SmartPhone 생성자" << endl;
	}

	~SmartPhone() {
		cout << "---- SmartPhone 소멸자" << endl;
	}


	void Call(string number) {
		cout << _callNumber << "에서 " << number << "로 전화를 합니다." << endl;
	}
};



class Human {
private:
	Heart _heart;
	Eye _leftEye, _rightEye;
	Watch* _pWatch;
	SmartPhone& _smartPhone;

public:

	
	Human(float heartRate, float leftSight, float rightSight, Watch* pWatch, SmartPhone& smartPhone)
		: _heart(heartRate), _leftEye(leftSight), _rightEye(rightSight), _pWatch(pWatch), _smartPhone(smartPhone)
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

	void SetWatch(Watch* pWatch) {
		_pWatch = pWatch;
	}

	void ShowWatch() {
		_pWatch->ShowCurrentTime();
	}


	void UsePhone(string number) {
		_smartPhone.Call(number);
	}


};


int main() {

	Watch mintWatch("Mint");
	Watch blueWatch("Blue");
	SmartPhone iPhone("아이폰 12", "010 - 1999 - 0902");


	Human human(70, 1.4f, 1.0f, &mintWatch, iPhone);

	human.CheckHealthStatus();
	human.ShowWatch();
	human.UsePhone("010 - 2022 - 1121");
	
	human.SetWatch(&blueWatch);
	human.CheckHealthStatus();
	human.ShowWatch();
	human.UsePhone("010 - 1234 - 5678");


	return 0;
}