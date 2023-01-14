#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
	int _type;
	string _name;
	float _weight;
	float _height;
	float _age;


public:
	Animal(int type, string name, float weight, float height, float age)
		: _type(type), _name(name), _weight(weight), _height(height), _age(age) {}

	int GetType() {
		return _type;
	}

	void Speak() {
		cout << _name << "�� ���մϴ�." << endl;
	}

	void Run() {
		cout << _name << "�� �ݴϴ�." << endl;
	}

	void Eat() {
		cout << _name << "�� �Խ��ϴ�." << endl;
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
	Pig(string name, float weight, float height, float age)
		: Animal(0, name, weight, height, age) {}

	void Speak() {
		cout << _name << "�� �ܲ��մϴ�." << endl;
	}

};


class Cow : public Animal {
public:
	Cow(string name, float weight, float height, float age)
		: Animal(1, name, weight, height, age) {}


	void Speak() {
		cout << _name << "�� �����մϴ�." << endl;
	}
};


class Chicken : public Animal {
private:

	bool _isFly;

	void Fly() {
		cout << _name << "�� ���ϴ�." << endl;
	}


public:
	Chicken(string name, float weight, float height, float age, bool isFly)
		: Animal(2, name, weight, height, age), _isFly(isFly) {}

	void Speak() {
		cout << _name << "�� �������մϴ�." << endl;
	}

	void Run() {
		if (_isFly) {
			Fly();
		}
		else {
			cout << _name << "�� �ݴϴ�." << endl;
		}
	}

};


class Dolphin : public Animal {
private:

	void Swim() {
		cout << _name << "�� ����� Ĩ�ϴ�." << endl;
	}

public:
	Dolphin(string name, float weight, float height, float age)
		: Animal(3, name, weight, height, age) {}

	
	void Speak() {
		cout << _name << "�� �����մϴ�." << endl;
	}


	void Run() {
		Swim();
	}


};


void Speak(Animal* pObj) {
	switch (pObj->GetType()) {
	case 0:
		((Pig*)pObj)->Speak();
		break;

	case 1:
		((Cow*)pObj)->Speak();
		break;

	case 2:
		((Chicken*)pObj)->Speak();
		break;

	case 3:
		((Dolphin*)pObj)->Speak();
		break;
	}
}



void Run(Animal* pObj) {
	switch (pObj->GetType())
	{
	case 0:
		((Pig*)pObj)->Run();
		break;

	case 1:
		((Cow*)pObj)->Run();
		break;

	case 2:
		((Chicken*)pObj)->Run();
		break;

	case 3:
		((Dolphin*)pObj)->Run();
		break;
	}
}



int main() {

	Animal* pArray[5];   // ������ �迭

	pArray[0] = new Pig("����", 180.0f, 150.0f, 2.5f);
	pArray[1] = new Cow("��", 220.0f, 200.0f, 1.8f);
	pArray[2] = new Chicken("������ ��", 4.0f, 40.0f, 1.2f, false);
	pArray[3] = new Chicken("���� ��", 5.3f, 42.0f, 1.5f, true);
	pArray[4] = new Dolphin("����", 200.0f, 200.0f, 3.5f);



	for (int i = 0; i < 5; i++) {
		Speak(pArray[i]);
	}

	cout << endl;


	for (int i = 0; i < 5; i++) {
		Run(pArray[i]);
	}


	for (int i = 0; i < 5; i++) {
		delete pArray[i];
	}



	//delete[] pArray;



	return 0;
}