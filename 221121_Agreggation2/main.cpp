#include <iostream>
#include <string>

using namespace std;

class SmartPhone {
private:
	string _blend;
	string _callNumber;

public:
	SmartPhone(string blend, string callNumber)
		: _blend(blend), _callNumber(callNumber)
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
	SmartPhone& _phone;

public:
	Human(SmartPhone& phone)
		: _phone(phone)
	{
		cout << "---- Human 생성자" << endl;
	}

	~Human() {
		cout << "---- Human 소멸자" << endl;
	}

	void UsePhone(string number) {
		_phone.Call(number);
	}

};


int main() {

	// Agreggation 을 참조형으로 구현
	SmartPhone smartPhone("아이폰", "010-1234-5678");

	cout << "Human 객체 생성" << endl;

	{
		Human human(smartPhone);

		human.UsePhone("010-9876-5432");

	}

	cout << "프로그램 종료" << endl;

	return 0;
}