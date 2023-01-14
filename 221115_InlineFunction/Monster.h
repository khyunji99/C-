#pragma once  // �ߺ� ����

// ������Ͽ��� �Լ��� ����θ� ���´�.

class Monster {
private:
	int _health;
	int _attack;
	int _defense;

public:

	Monster(int health, int attack, int defense);

	// Ŭ���� ���ο��� �Լ��� �����ϸ�
// �����Ϸ��� inline �Լ��� ����� �޶�� ��û���� �޾Ƶ帰��.
	inline void SetHealth(int value);
	int GetHealth();
	void Attack();
	void info();

};

inline void Monster::SetHealth(int value) {
	_health = value;
}