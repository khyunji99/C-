#include <iostream>

using namespace std;

class Dragon {
private:
	// 멤버변수와 일반변수를 구분하기 위해서
	// 멤버변수 앞에 이니셜을 붙이는 것이 좋다.
	// 여기서는 _를 붙여주었다.
	int _health;   // 생명력
	int _attack;   // 공격력
	int _defense;  // 방어력

public:

	// 기본 생성자 (인자를 받지 않는 생성자)
	Dragon() {
		cout << "Dragon 기본 생성자" << endl;
		_health = 0;
		_attack = 0;
		_defense = 0;
	}

	// 인자를 받는 생성자
	Dragon(int health, int attack, int defense) {
		cout << "Dragon 인자를 받는 생성자" << endl;
		_health = health;
		_attack = attack;
		_defense = defense;
	}

	void Attack() {  // 멤버함수
		cout << "공격" << endl;
	}

	void ShowInfo() {  // 멤버함수
		cout << "생명력:" << _health << endl;
		cout << "공격력:" << _attack << endl;
		cout << "방어력:" << _defense << endl;
	}

};


int main() {
	// 객체를 만들때 자동으로 호출되어지는 멤버함수가 있다.
	// 그것을 생성자 라고 한다.
	// 객체는 생성자가 호출되어야지만 온전한 객체로 생성이 된다.
	// 생성자를 만들지 않으면 컴파일러가 자동으로 기본 생성자를
	// 만들어서 포함을 시킨다.

	Dragon dragonc;  // 기본생성자가 호출되어 객체 생성

	dragonc.Attack();

	dragonc.ShowInfo();

	Dragon dragonb(100, 100, 100);

	dragonb.ShowInfo();





	return 0;
}