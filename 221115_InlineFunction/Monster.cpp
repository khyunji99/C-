#include "Monster.h"
#include <iostream>

// 함수구현 넣는 곳
// 이 함수들이 어디에 있는 건지 알려주기 위해
// Monster:: 를 적어줘서 알려주는 것이다.
// coutt << endl; 는 iostream 에서 지원하는 함수이다
// 그리고 std:: 를 각각 다 적어줘도 되고 아니면
// using namespace std; 를 맨 위에 적어서 한번에
// 해결해도 된다. 여기서는 각각 다 std:: 적어줬다.


Monster::Monster(int health, int attack, int defense)
	: _health(health), _attack(attack), _defense(defense) {

}

// 클래스 내부에서 함수를 구현하면
// 컴파일러는 inline 함수를 만들어 달라는 요청으로 받아드린다.
// 여기 있던 SetHealth 함수는 inline함수로 만들기 위해 함수의 선언부가 있는
// 헤더파일로 여기있던 함수의 구현부가 옮겨져갔다.


int Monster :: GetHealth() {
	return _health;
}

void Monster :: Attack() {
	std::cout << "공격" << std::endl;
}

void Monster::info() {
	std::cout << "생명력:" << _health << std::endl;
	std::cout << "공격력:" << _attack << std::endl;
	std::cout << "방어력:" << _defense << std::endl;
}