#include <iostream>

using namespace std;

class Dragon {
private:
	// ��������� �Ϲݺ����� �����ϱ� ���ؼ�
	// ������� �տ� �̴ϼ��� ���̴� ���� ����.
	// ���⼭�� _�� �ٿ��־���.
	int _health;   // �����
	int _attack;   // ���ݷ�
	int _defense;  // ����

public:

	// �⺻ ������ (���ڸ� ���� �ʴ� ������)
	Dragon() {
		cout << "Dragon �⺻ ������" << endl;
		_health = 0;
		_attack = 0;
		_defense = 0;
	}

	// ���ڸ� �޴� ������
	Dragon(int health, int attack, int defense) {
		cout << "Dragon ���ڸ� �޴� ������" << endl;
		_health = health;
		_attack = attack;
		_defense = defense;
	}

	void Attack() {  // ����Լ�
		cout << "����" << endl;
	}

	void ShowInfo() {  // ����Լ�
		cout << "�����:" << _health << endl;
		cout << "���ݷ�:" << _attack << endl;
		cout << "����:" << _defense << endl;
	}

};


int main() {
	// ��ü�� ���鶧 �ڵ����� ȣ��Ǿ����� ����Լ��� �ִ�.
	// �װ��� ������ ��� �Ѵ�.
	// ��ü�� �����ڰ� ȣ��Ǿ������ ������ ��ü�� ������ �ȴ�.
	// �����ڸ� ������ ������ �����Ϸ��� �ڵ����� �⺻ �����ڸ�
	// ���� ������ ��Ų��.

	Dragon dragonc;  // �⺻�����ڰ� ȣ��Ǿ� ��ü ����

	dragonc.Attack();

	dragonc.ShowInfo();

	Dragon dragonb(100, 100, 100);

	dragonb.ShowInfo();





	return 0;
}