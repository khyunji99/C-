#include <iostream>
#include <string>

using namespace std;
// ���� �ùķ��̼� ����
// ��ȹ ����, ��, ��

// Ư��ȭ
// Ŭ���� �ϳ��� ��� Ŀ���� ��������ϱ� ��ȿ�������� �Ǿ��
// ������ ����� �Ѵ�.

// Ÿ�� ������ ���ִ� ���� ��ǥ

/*
typedef enum tagAnimalType {
	PIG = 0,
	COW,
	CHICKEN,
	DOLPHIN
} AnimalType;
*/



class Animal {
protected:
//	AnimalType _type;  // 0:����, 1:��, 2:��, 3:����(�߰�)
	string _name;
	float _weight;
	float _height;
	int _age;


public:
	Animal( string name, float weight, float height, int age)
		: _name(name), _weight(weight), _height(height), _age(age) {}


	void Speak() {
		cout << _name << "�� ���մϴ�." << endl;
	}


	void Run() {
		cout << _name << "��(��) �ݴϴ�." << endl;
	}


	void Eat() {
		cout << _name << "��(��) �Դ´�." << endl;
	}


	void Info() {
		cout << "�̸� : " << _name << endl;
		cout << "������ : " << _weight << endl;
		cout << "���� : " << _height << endl;
		cout << "���� : " << _age << endl;
	}
};


class Pig : public Animal {
public:
	Pig(string name, float weight, float height, int age)
		:Animal(name, weight, height, age) {}

	void Speak() {
		cout << _name << "�� �ܲ��մϴ�." << endl;
	}

};



class Cow : public Animal {
public:
	Cow(string name, float weight, float height, int age)
		:Animal(name, weight, height, age) {}

	void Speak() {
		cout << _name << "�� �����մϴ�."  << endl;
	}

};


class Chicken : public Animal {
private:
	bool _isFly;

	void Fly() {
		cout << _name << "�� ���ϴ�." << endl;

	}


public:
	Chicken(string name, float weight, float height, int age, bool isFly)
		: Animal(name, weight, height, age), _isFly(isFly) {}

	void Speak() {
		cout << _name << "�� �������մϴ�." << endl;
	}

	void Run() {
		if (_isFly) {
			Fly();
		}
		else {
			cout << _name << "�� ������ �ݴϴ�." << endl;
		}
	}

};


class Dolphin : public Animal {
private:
	
	void Swim() {
		cout << _name << "�� ����� Ĩ�ϴ�." << endl;
	}


public:
	Dolphin(string name, float weight, float height, int age)
		:Animal(name, weight, height, age) {}

	void Speak() {
		cout << _name << "�� �����մϴ�." << endl;
	}

	void Run() {
		Swim();
	}


};


int main() {

	Pig pig("����", 180.0f, 150.0f, 2);
	Cow cow("��", 220.0f, 200.0f, 3);
	Chicken notFlyChicken("������ ��", 4.0f, 20.0f, 1, false);
	Chicken flyChicken("���� ��", 3.5f, 10.0f, 3, true);
	Dolphin dolphin("����", 200.0f, 230.0f, 4);


	pig.Speak();
	cow.Speak();
	notFlyChicken.Speak();
	flyChicken.Speak();
	dolphin.Speak();

	cout << endl;

	pig.Run();
	cow.Run();
	notFlyChicken.Run();
	flyChicken.Run();
	dolphin.Run();


	return 0;
}