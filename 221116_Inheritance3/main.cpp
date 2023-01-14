#include <iostream>
#include <string>

using namespace std;

// �������� �ùķ��̼� ����
// ��ȹ : ����, ��, ��


class Stock {
private:
	string _name;       // �̸�
	float _healthRate;  // �ǰ�����
	float _weight;      // ������
	float _age;         // ����


public:

	Stock(string name, float healthrate, float weight, float age)
		: _name(name), _healthRate(healthrate), _weight(weight), _age(age) {}

	string GetName() {
		return _name;
	}

	void Speak() {
		cout << _name << "�� ���մϴ�." << endl;
	}

	void Eat() {
		cout << _name << "�� ���ְ� �Խ��ϴ�." << endl;
	}

	void Run() {
		cout << _name << "�� ������ �ݴϴ�." << endl;
	}

	void CheckHealth() {
		if (_healthRate <= 100.0f && _healthRate > 80.0f) {
			cout << _name << "�� �ǰ����°� ����" << endl;
		}
		else if (_healthRate <= 80.0f && _healthRate > 50) {
			cout << _name << "�� �ǰ����°� ����" << endl;
		}
	}

	void Info() {
		cout << "�̸� : " << _name << endl;
		cout << "�ǰ����� : " << _healthRate << endl;
		cout << "������ : " << _weight << endl;
		cout << "���� : " << _age << endl;
	}

};


class Pig : public Stock {


public:
	Pig(string name, float healthrate, float weight, float age)
		: Stock(name, healthrate, weight, age) {}


	void Speak() {
		cout << GetName() << "�� �ܲ��ϰ� ���մϴ�." << endl;
	}


};


class Cow : public Stock {


public:
	Cow(string name, float healthrate, float weight, float age)
		: Stock(name, healthrate, weight, age) {}

	void Speak() {
		cout << GetName() << "�� �����ϰ� ���մϴ�." << endl;
	}

	
};


class Chicken : public Stock {
private:
	bool _isFly;

	// Fly() �Լ��� private���� ������ ����
	// �� �Լ��� �ٸ� Ŭ�������� ����Ϸ��� ���� �ƴ϶�
	// ���� Ŭ���� ���ο����� ����� ���̶�
	// ���� public���� ������ �ʿ䰡 ����.
	void Fly() {
		cout << GetName() << "�� ���� ���ϴ�." << endl;
	}



public:
	Chicken(string name, float healthrate, float weight, float age, bool isFly)
		: Stock(name, healthrate, weight, age), _isFly(isFly) {}

	void Speak() {
		cout << GetName() << "�� �������ϰ� ���մϴ�." << endl;
	}

	
	void Run() {
		if (_isFly) {
			Fly();
		}
		else {
			cout << GetName() << "�� ������ �ݴϴ�." << endl;
		}
	}

	void Info() {
		Stock::Info();
		
		if (_isFly) {
			cout << "���� ��" << endl;
		}
		else {
			cout << "������ ��" << endl;
		}
	}
};



class Dolphin : public Stock {

private:

	void Swim() {
		cout << GetName() << "�� ����� Ĩ�ϴ�." << endl;
	}


public:
	Dolphin(string name, float healthrate, float weight, float age)
		: Stock(name, healthrate, weight, age) {}


	void Speak() {
		cout << GetName() << "�� űű�ϰ� ���մϴ�." << endl;
	}

	void Run() {
		Swim();
	}

};



int main() {
	Pig pig("����", 200.0f, 80.0f, 2.5f);
	Cow cow("��", 250.0f, 100.0f, 3.5f);
	Chicken flyChicken("���� ��", 70.0f, 10.0f, 1.2f, true);
	Chicken notFlyChicken("������ ��", 50.0f, 8.0f, 2.2f, false);
	Dolphin dolphin("����", 150.0f, 75.0f, 3.2f);


	pig.Speak();
	cow.Speak();
	flyChicken.Speak();
	notFlyChicken.Speak();
	dolphin.Speak();

	cout << endl;

	pig.Run();
	cow.Run();
	flyChicken.Run();
	notFlyChicken.Run();
	dolphin.Run();


	return 0;
}