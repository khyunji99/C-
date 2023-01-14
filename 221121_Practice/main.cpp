#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

// Human Ŭ������ Heart, Eye, Watch, SmartPhone ��ü�� 
// �� ���Խ��� �۵���Ű��

class Heart {
private:
	float _heartRate;

public:
	Heart(float rate)
		: _heartRate(rate)
	{
		cout << "---- Heart ������" << endl;
	}

	~Heart() {
		cout << "---- Heart �Ҹ���" << endl;
	}


	void ShowInfo() {
		cout << _heartRate << "�� ������ �ٰ� �ֽ��ϴ�." << endl;
	}
};


class Eye {
private:
	float _sight;

public:
	Eye(float sight)
		: _sight(sight)
	{
		cout << "---- Eye ������" << endl;
	}

	~Eye() {
		cout << "---- Eye �Ҹ���" << endl;
	}


	void ShowStatus() {
		cout << _sight << "�� �÷��� ������ �ֽ��ϴ�." << endl;
	}
};



class Watch {
private:
	string _color;

public:
	Watch(string color)
		: _color(color)
	{
		cout << "---- Watch ������" << endl;
	}

	~Watch() {
		cout << "---- Watch �Ҹ���" << endl;
	}

	void ShowCurrentTime() {
		cout << "[ " << _color << " �ð� ���� �ð� ]" << endl;

		time_t timer;
		struct tm* t;

		timer = time(NULL);    // ���� �ð�
		t = localtime(&timer);

		cout << t->tm_hour << "�� " << t->tm_min << "�� " << t->tm_sec << "�� �Դϴ�." << endl << endl;
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
		cout << "---- SmartPhone ������" << endl;
	}

	~SmartPhone() {
		cout << "---- SmartPhone �Ҹ���" << endl;
	}


	void Call(string number) {
		cout << _callNumber << "���� " << number << "�� ��ȭ�� �մϴ�." << endl;
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
		cout << "---- Human ������" << endl;
	}

	~Human() {
		cout << "---- Human �Ҹ���" << endl;
	}


	void CheckHealthStatus() {
		_heart.ShowInfo();

		cout << "���� ��";
		_leftEye.ShowStatus();

		cout << "������ ��";
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
	SmartPhone iPhone("������ 12", "010 - 1999 - 0902");


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