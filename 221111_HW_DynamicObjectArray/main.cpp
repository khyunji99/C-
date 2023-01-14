#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

// �߰��� ������ǰ�� �÷��� ���� ���ݿ� �Ȱ� ���� ��


class Washer {
private:
	string _type;          // ��Ź�� ����
	int _usingTime;        // ��Ź�� ����� �Ⱓ
	int _averageWashUsage; // ��� �� ��뷮
	int _price;            // ��������
	int _sellPrice;        // �߰�� �� ����
	float _powerConsumed; // �Һ� ���� (0.176)(kw/h)
	

public:

	// �⺻ ������
	Washer()
		: _type(""), _usingTime(3), _price(880000), _averageWashUsage(132), _sellPrice(500000), _powerConsumed(0.0f) {

	}

	Washer(string type, int phoneTime, int price, int washUsage, int sellPrice, double power)
		: _type(type), _usingTime(phoneTime), _price(price), _averageWashUsage(washUsage), _sellPrice(sellPrice), _powerConsumed(power) {

	}


	void setPhoneType(string type) {
		_type = type;
	}

	void Init(string type, int phoneTime, int price, int washUsage, int sellPrice, double power) {
		_type = type;
		_usingTime = phoneTime;
		_price = price;
		_averageWashUsage = washUsage;
		_sellPrice = sellPrice;
		_powerConsumed = power;
	}

	void showInfo() {
		cout << "��Ź�� ���� : " << _type << endl;
		cout << "��Ź�� ��� �Ⱓ : " << _usingTime << endl;
		cout << "��Ź�� ������ ���� : " << _price << endl;
		cout << "��Ź�� �뷮 : " << _averageWashUsage << endl;
		cout << "��Ź�� �� �߰��� : "<<  _sellPrice << endl;
		cout << "��Ź�� �Һ����� : " << _powerConsumed << endl;
	}


};

class Oven {
private:
	string _type;         // ���� ����
	int _usingTime;       // ���� ����� �Ⱓ (:��)
	string _usage;        // ���� �뷮 (42L)
	int _price;           // �������� (��� ����)
	int _sellPrice;       // �߰�� �� ����
	string _color;        // ���� ���� (������)
	float _powerConsumed; // ���� �Һ� ���� (1.8)(kwh)

public:

	// ������
	Oven()
		: _type(""), _usingTime(2), _price(980000), _usage(""), _sellPrice(650000), _color(""), _powerConsumed(0.0f){

	}

	Oven(string type, int usingTime, int price, string usage, int sellPrice, string color, float powerConsumed)
		: _type(type), _usingTime(usingTime), _price(price), _usage(usage),_sellPrice(sellPrice), _color(color), _powerConsumed(powerConsumed) {

	}


	void SetOvenType(string type) {
		_type = type;
	}

};

int main() {



	return 0;
}