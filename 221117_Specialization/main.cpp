#include <iostream>
#include <string>

using namespace std;
// 동물 시뮬레이션 게임
// 기획 돼지, 닭, 소

// 특수화
// 클래스 하나가 계속 커지고 비대해지니깐 비효율적으로 되어갈때
// 역방향 상속을 한다.

// 타입 변수를 없애는 것이 목표

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
//	AnimalType _type;  // 0:돼지, 1:소, 2:닭, 3:돌고래(추가)
	string _name;
	float _weight;
	float _height;
	int _age;


public:
	Animal( string name, float weight, float height, int age)
		: _name(name), _weight(weight), _height(height), _age(age) {}


	void Speak() {
		cout << _name << "가 말합니다." << endl;
	}


	void Run() {
		cout << _name << "이(가) 뜁니다." << endl;
	}


	void Eat() {
		cout << _name << "이(가) 먹는다." << endl;
	}


	void Info() {
		cout << "이름 : " << _name << endl;
		cout << "몸무게 : " << _weight << endl;
		cout << "신장 : " << _height << endl;
		cout << "나이 : " << _age << endl;
	}
};


class Pig : public Animal {
public:
	Pig(string name, float weight, float height, int age)
		:Animal(name, weight, height, age) {}

	void Speak() {
		cout << _name << "가 꿀꿀합니다." << endl;
	}

};



class Cow : public Animal {
public:
	Cow(string name, float weight, float height, int age)
		:Animal(name, weight, height, age) {}

	void Speak() {
		cout << _name << "가 음매합니다."  << endl;
	}

};


class Chicken : public Animal {
private:
	bool _isFly;

	void Fly() {
		cout << _name << "이 납니다." << endl;

	}


public:
	Chicken(string name, float weight, float height, int age, bool isFly)
		: Animal(name, weight, height, age), _isFly(isFly) {}

	void Speak() {
		cout << _name << "이 꼬끼오합니다." << endl;
	}

	void Run() {
		if (_isFly) {
			Fly();
		}
		else {
			cout << _name << "이 열심히 뜁니다." << endl;
		}
	}

};


class Dolphin : public Animal {
private:
	
	void Swim() {
		cout << _name << "가 헤엄을 칩니다." << endl;
	}


public:
	Dolphin(string name, float weight, float height, int age)
		:Animal(name, weight, height, age) {}

	void Speak() {
		cout << _name << "가 끽끽합니다." << endl;
	}

	void Run() {
		Swim();
	}


};


int main() {

	Pig pig("돼지", 180.0f, 150.0f, 2);
	Cow cow("소", 220.0f, 200.0f, 3);
	Chicken notFlyChicken("못나는 닭", 4.0f, 20.0f, 1, false);
	Chicken flyChicken("나는 닭", 3.5f, 10.0f, 3, true);
	Dolphin dolphin("돌고래", 200.0f, 230.0f, 4);


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