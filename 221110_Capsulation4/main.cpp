#include <iostream>

using namespace std;

class Dragon {
private:
	// 멤버변수와 일반변수를 구분하기 위해서
	// 멤버변수 앞에 이니셜을 붙이는 것이 좋다.
	// 여기서는 _를 붙여주었다.
	int _health;     // 생명력
	int _attack;     // 공격력
	int _defense;    // 방어력

	const int _MAX = 20;  // 상수형 변수
	int& _refa;      // 참조형 변수

public:

	// 인자를 받는 생성자
	// 생성자 초기화 리스트를 가지고 값을 초기화 하는게 좋다.
	Dragon(int health, int attack, int defense, int & refa, int MAX)
	  :_health(health),_attack(attack),_defense(defense),_refa(refa),_MAX(MAX)  // 생성자 초기화 리스트
	{
		// 생성자의 블럭안에서 대입연산자를 통해서 초기화 할 수 없다.
		// refa = _health;
		// MAX = 200;
	}


	~Dragon() {
		// 객체가 사라질때 후단에 해야하는 작업들
		// 리소스 해제
		// 내가 만든 동적메모리 반납 하는 것이다.
		// 객체가 사라질때 소멸자가 호출되어야 한다.
		// 소멸자는 () 안에 아무것도 적으면 안된다.
		cout << "소멸자" << endl;
	}



	void Attack() {  // 멤버함수
		cout << "공격" << endl;
	}

	void ShowInfo() {  // 멤버함수
		cout << "생명력:" << _health << endl;
		cout << "공격력:" << _attack << endl;
		cout << "방어력:" << _defense << endl;
		cout << "_refa: " << _refa << endl;
		cout << "_MAX: " << _MAX << endl;
	}

};


int main() {
	int a = 200;

	// refa는 메인함수에 있는 a변수를 인자값으로 받았다.
	// 따라서 refa는 메인함수에 있는 a변수의 주소값을 가지고 있어
	// 메인함수의 a변수를 가리키게 된다.
	// 그래서 메인함수에 있는 변수 a의 값을 바꾸게 되면
	// refa의 값도 바뀌게 된다.
	Dragon dragona(100, 100, 100, a, 1000);

	dragona.ShowInfo();

	a = 120000;

	dragona.ShowInfo();



	return 0;
}