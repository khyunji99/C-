#pragma once  // 중복 방지

// 헤더파일에는 함수의 선언부만 적는다.

class Monster {
private:
	int _health;
	int _attack;
	int _defense;

public:

	Monster(int health, int attack, int defense);

	// 클래스 내부에서 함수를 구현하면
// 컴파일러는 inline 함수를 만들어 달라는 요청으로 받아드린다.
	inline void SetHealth(int value);
	int GetHealth();
	void Attack();
	void info();

};

inline void Monster::SetHealth(int value) {
	_health = value;
}