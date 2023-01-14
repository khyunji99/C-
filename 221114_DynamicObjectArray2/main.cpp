#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Bus{
private:
	string _Num;
	int _sitCount;
	int _doorCount;
	int _currentSpeed;   // 현재 속도

public:
	Bus()
		:_Num(""), _sitCount(48), _doorCount(2), _currentSpeed(0) {

	}

	Bus(string Num, int sitCount, int doorCount)
		: _Num(Num), _sitCount(sitCount), _doorCount(doorCount), _currentSpeed(0) {

	}

	int GetCurrentSpeed() {
		return _currentSpeed;
	}


	void Init(string Num, int sitCount, int doorCount) {
		_Num = Num;
		_sitCount = sitCount;
		_doorCount = doorCount;
		_currentSpeed = 0;
	}

	void Drive() {

		cout << _currentSpeed << "로 버스 주행" << endl;
	}

	void Accel() {
		_currentSpeed++;
		cout << _Num << "버스 속도 증가" << endl;
	}

	void Break() {
		_currentSpeed--;

		if (_currentSpeed > 0) {
			cout << _Num << "버스" << _currentSpeed << "속도로 감속" << endl;
		}
		else {
			_currentSpeed = 0;
			cout << _Num << "버스 정지" << endl;
		}
	}


	void info() {
		cout << "버스번호 : " << _Num << endl;
		cout << "좌석 개수 : " << _sitCount << endl;
		cout << "문 개수 : " << _doorCount << endl;
		cout << "현재 속도 : " << _currentSpeed << endl;
	}
};


int main() {

	int busCount = 0;
	char buff[100];    // 이름 저장용 메모리

	cout << "운행 버스 댓수를 입력하세요 : ";
	cin >> busCount;


	Bus* pbus = new Bus[busCount];     // 동적 객체 배열 생성


	for (int i = 0; i < busCount; i++) {
		sprintf(buff, "%d", i % busCount + 700);
		pbus[i].Init(buff, i % 5 + 40, i % 2 + 1);
	}


	for (int i = 0; i < busCount; i++) {
		for (int j = 0; j < 70; j++) {
			pbus[i].Accel();
		}
	}


	for (int i = 0; i < busCount; i++) {
		pbus[i].info();
	}


	while (1) {
		pbus[0].Break();

		if (pbus[0].GetCurrentSpeed() <= 0) {
			break;
		}
	}


	delete[] pbus;                    // 동적 객체 배열 반환


	return 0;
}