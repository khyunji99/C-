#include "Monster.h"
#include <iostream>

// �Լ����� �ִ� ��
// �� �Լ����� ��� �ִ� ���� �˷��ֱ� ����
// Monster:: �� �����༭ �˷��ִ� ���̴�.
// coutt << endl; �� iostream ���� �����ϴ� �Լ��̴�
// �׸��� std:: �� ���� �� �����൵ �ǰ� �ƴϸ�
// using namespace std; �� �� ���� ��� �ѹ���
// �ذ��ص� �ȴ�. ���⼭�� ���� �� std:: �������.


Monster::Monster(int health, int attack, int defense)
	: _health(health), _attack(attack), _defense(defense) {

}

// Ŭ���� ���ο��� �Լ��� �����ϸ�
// �����Ϸ��� inline �Լ��� ����� �޶�� ��û���� �޾Ƶ帰��.
// ���� �ִ� SetHealth �Լ��� inline�Լ��� ����� ���� �Լ��� ����ΰ� �ִ�
// ������Ϸ� �����ִ� �Լ��� �����ΰ� �Ű�������.


int Monster :: GetHealth() {
	return _health;
}

void Monster :: Attack() {
	std::cout << "����" << std::endl;
}

void Monster::info() {
	std::cout << "�����:" << _health << std::endl;
	std::cout << "���ݷ�:" << _attack << std::endl;
	std::cout << "����:" << _defense << std::endl;
}