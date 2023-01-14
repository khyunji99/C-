#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Bus{
private:
	string _Num;
	int _sitCount;
	int _doorCount;
	int _currentSpeed;   // ���� �ӵ�

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

		cout << _currentSpeed << "�� ���� ����" << endl;
	}

	void Accel() {
		_currentSpeed++;
		cout << _Num << "���� �ӵ� ����" << endl;
	}

	void Break() {
		_currentSpeed--;

		if (_currentSpeed > 0) {
			cout << _Num << "����" << _currentSpeed << "�ӵ��� ����" << endl;
		}
		else {
			_currentSpeed = 0;
			cout << _Num << "���� ����" << endl;
		}
	}


	void info() {
		cout << "������ȣ : " << _Num << endl;
		cout << "�¼� ���� : " << _sitCount << endl;
		cout << "�� ���� : " << _doorCount << endl;
		cout << "���� �ӵ� : " << _currentSpeed << endl;
	}
};


int main() {

	int busCount = 0;
	char buff[100];    // �̸� ����� �޸�

	cout << "���� ���� ����� �Է��ϼ��� : ";
	cin >> busCount;


	Bus* pbus = new Bus[busCount];     // ���� ��ü �迭 ����


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


	delete[] pbus;                    // ���� ��ü �迭 ��ȯ


	return 0;
}