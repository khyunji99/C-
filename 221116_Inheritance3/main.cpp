#include <iostream>
#include <string>

using namespace std;

// 동물농장 시뮬레이션 게임
// 기획 : 돼지, 소, 닭


class Stock {
private:
	string _name;       // 이름
	float _healthRate;  // 건강지수
	float _weight;      // 몸무게
	float _age;         // 나이


public:

	Stock(string name, float healthrate, float weight, float age)
		: _name(name), _healthRate(healthrate), _weight(weight), _age(age) {}

	string GetName() {
		return _name;
	}

	void Speak() {
		cout << _name << "가 말합니다." << endl;
	}

	void Eat() {
		cout << _name << "가 맛있게 먹습니다." << endl;
	}

	void Run() {
		cout << _name << "가 열심히 뜁니다." << endl;
	}

	void CheckHealth() {
		if (_healthRate <= 100.0f && _healthRate > 80.0f) {
			cout << _name << "의 건강상태가 좋음" << endl;
		}
		else if (_healthRate <= 80.0f && _healthRate > 50) {
			cout << _name << "의 건강상태가 보통" << endl;
		}
	}

	void Info() {
		cout << "이름 : " << _name << endl;
		cout << "건강상태 : " << _healthRate << endl;
		cout << "몸무게 : " << _weight << endl;
		cout << "나이 : " << _age << endl;
	}

};


class Pig : public Stock {


public:
	Pig(string name, float healthrate, float weight, float age)
		: Stock(name, healthrate, weight, age) {}


	void Speak() {
		cout << GetName() << "이 꿀꿀하고 말합니다." << endl;
	}


};


class Cow : public Stock {


public:
	Cow(string name, float healthrate, float weight, float age)
		: Stock(name, healthrate, weight, age) {}

	void Speak() {
		cout << GetName() << "가 음매하고 말합니다." << endl;
	}

	
};


class Chicken : public Stock {
private:
	bool _isFly;

	// Fly() 함수를 private으로 선언한 이유
	// 이 함수는 다른 클래스에서 사용하려는 것이 아니라
	// 같은 클래스 내부에서만 사용할 것이라서
	// 굳이 public으로 선언할 필요가 없다.
	void Fly() {
		cout << GetName() << "이 훨훨 납니다." << endl;
	}



public:
	Chicken(string name, float healthrate, float weight, float age, bool isFly)
		: Stock(name, healthrate, weight, age), _isFly(isFly) {}

	void Speak() {
		cout << GetName() << "이 꼬끼오하고 말합니다." << endl;
	}

	
	void Run() {
		if (_isFly) {
			Fly();
		}
		else {
			cout << GetName() << "이 열심히 뜁니다." << endl;
		}
	}

	void Info() {
		Stock::Info();
		
		if (_isFly) {
			cout << "나는 닭" << endl;
		}
		else {
			cout << "못나는 닭" << endl;
		}
	}
};



class Dolphin : public Stock {

private:

	void Swim() {
		cout << GetName() << "가 헤엄을 칩니다." << endl;
	}


public:
	Dolphin(string name, float healthrate, float weight, float age)
		: Stock(name, healthrate, weight, age) {}


	void Speak() {
		cout << GetName() << "가 킥킥하고 말합니다." << endl;
	}

	void Run() {
		Swim();
	}

};



int main() {
	Pig pig("돼지", 200.0f, 80.0f, 2.5f);
	Cow cow("소", 250.0f, 100.0f, 3.5f);
	Chicken flyChicken("나는 닭", 70.0f, 10.0f, 1.2f, true);
	Chicken notFlyChicken("못나는 닭", 50.0f, 8.0f, 2.2f, false);
	Dolphin dolphin("돌고래", 150.0f, 75.0f, 3.2f);


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