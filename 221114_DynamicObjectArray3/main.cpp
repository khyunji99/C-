#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Bus {
private:
	string _Num;
	int _sitCount;
	int _doorCount;
	int _currentSpeed;  // 현재 속도

public:
	Bus()
		: _Num(""), _sitCount(48), _doorCount(2), _currentSpeed(0) {}

	Bus (string Num, int sitCount, int doorCount)
		: _Num(Num), _sitCount(sitCount), _doorCount(doorCount), _currentSpeed(0){}

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
		_currentSpeed += 10;
		cout << _Num << "버스 속도 증가" << endl;
	}

	void Break() {
		_currentSpeed -= 10;

		if (_currentSpeed > 0) {
			cout << _Num << "버스 " << _currentSpeed << "속도로 감속" << endl;
		}
		else {
			_currentSpeed = 0;
			cout << _Num << "버스 정지" << endl;
		}
	}



	void info() {
		cout << "버스 번호 : " << _Num << endl;
		cout << "좌석 개수 : " << _sitCount << endl;
		cout << "문 개수 : " << _doorCount << endl;
		cout << "현재 속도 : " << _currentSpeed << endl << endl;
	}
};


int main() {

	int busCount = 0;
	char buff[100];    // 이름 저장용 메모리

	cout << "운행 버스 댓수를 입력하세요 : ";
	cin >> busCount;

	Bus** ppbus = new Bus* [busCount];

	for (int i = 0; i < busCount; i++) {
		sprintf(buff, "%d", i % busCount + 8000);

		ppbus[i] = new Bus(buff, i % 4 + 40, i % 2 + 1);
	}


	for (int i = 0; i < busCount; i++) {
		ppbus[i]->Drive();
	}

	for (int i = 0; i < busCount; i++) {
		ppbus[i]->Accel();
	}

	for (int i = 0; i < busCount; i++) {
		ppbus[i]->info();
	}

	for (int i = 0; i < busCount; i++) {
		delete ppbus[i];
	}


	delete[] ppbus;


	return 0;
}