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
	SmartPhone& _phone;

public:
	Human(SmartPhone& phone)
		: _phone(phone)
	{
		cout << "---- Human ������" << endl;
	}

	~Human() {
		cout << "---- Human �Ҹ���" << endl;
	}

	void UsePhone(string number) {
		_phone.Call(number);
	}

};


int main() {

	// Agreggation �� ���������� ����
	SmartPhone smartPhone("������", "010-1234-5678");

	cout << "Human ��ü ����" << endl;

	{
		Human human(smartPhone);

		human.UsePhone("010-9876-5432");

	}

	cout << "���α׷� ����" << endl;

	return 0;
}