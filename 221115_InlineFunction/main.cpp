#include "Monster.h"

int main() {

	Monster mons(100, 30, 40);

	mons.SetHealth(200);

	// mons._health = 200;
	// ���Ͱ��� �Լ��� ȣ���ϰ� ���ڰ����� 200�� �ο��ؼ�
	// ���� ���� ���� �׳� mons._health = 200 ó�� �ٷ�
	// ���� ����־��� ��� �ϴ°� inline �Լ���� �Ѵ�.

	mons.Attack();

	mons.info();

	return 0;
}