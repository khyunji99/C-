#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

// 중고나라에 가전제품을 올려서 좋은 가격에 팔고 싶은 나


class Washer {
private:
	string _type;          // 세탁기 종류
	int _usingTime;        // 세탁기 사용한 기간
	int _averageWashUsage; // 평균 물 사용량
	int _price;            // 원래가격
	int _sellPrice;        // 중고로 팔 가격
	float _powerConsumed; // 소비 전력 (0.176)(kw/h)
	

public:

	// 기본 생성자
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
		cout << "세탁기 종류 : " << _type << endl;
		cout << "세탁기 사용 기간 : " << _usingTime << endl;
		cout << "세탁기 샀을때 가격 : " << _price << endl;
		cout << "세탁기 용량 : " << _averageWashUsage << endl;
		cout << "세탁기 팔 중고가격 : "<<  _sellPrice << endl;
		cout << "세탁기 소비전력 : " << _powerConsumed << endl;
	}


};

class Oven {
private:
	string _type;         // 오븐 종류
	int _usingTime;       // 오븐 사용한 기간 (:년)
	string _usage;        // 오븐 용량 (42L)
	int _price;           // 원래가격 (샀던 가격)
	int _sellPrice;       // 중고로 팔 가격
	string _color;        // 오븐 색상 (검은색)
	float _powerConsumed; // 오븐 소비 전력 (1.8)(kwh)

public:

	// 생성자
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