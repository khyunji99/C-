#include <iostream>

using namespace std;

class Dragon {
private:
	// ��������� �Ϲݺ����� �����ϱ� ���ؼ�
	// ������� �տ� �̴ϼ��� ���̴� ���� ����.
	// ���⼭�� _�� �ٿ��־���.
	int _health;     // �����
	int _attack;     // ���ݷ�
	int _defense;    // ����

	const int _MAX = 20;  // ����� ����
	int& _refa;      // ������ ����

public:

	// ���ڸ� �޴� ������
	// ������ �ʱ�ȭ ����Ʈ�� ������ ���� �ʱ�ȭ �ϴ°� ����.
	Dragon(int health, int attack, int defense, int & refa, int MAX)
	  :_health(health),_attack(attack),_defense(defense),_refa(refa),_MAX(MAX)  // ������ �ʱ�ȭ ����Ʈ
	{
		// �������� ���ȿ��� ���Կ����ڸ� ���ؼ� �ʱ�ȭ �� �� ����.
		// refa = _health;
		// MAX = 200;
	}


	~Dragon() {
		// ��ü�� ������� �Ĵܿ� �ؾ��ϴ� �۾���
		// ���ҽ� ����
		// ���� ���� �����޸� �ݳ� �ϴ� ���̴�.
		// ��ü�� ������� �Ҹ��ڰ� ȣ��Ǿ�� �Ѵ�.
		// �Ҹ��ڴ� () �ȿ� �ƹ��͵� ������ �ȵȴ�.
		cout << "�Ҹ���" << endl;
	}



	void Attack() {  // ����Լ�
		cout << "����" << endl;
	}

	void ShowInfo() {  // ����Լ�
		cout << "�����:" << _health << endl;
		cout << "���ݷ�:" << _attack << endl;
		cout << "����:" << _defense << endl;
		cout << "_refa: " << _refa << endl;
		cout << "_MAX: " << _MAX << endl;
	}

};


int main() {
	int a = 200;

	// refa�� �����Լ��� �ִ� a������ ���ڰ����� �޾Ҵ�.
	// ���� refa�� �����Լ��� �ִ� a������ �ּҰ��� ������ �־�
	// �����Լ��� a������ ����Ű�� �ȴ�.
	// �׷��� �����Լ��� �ִ� ���� a�� ���� �ٲٰ� �Ǹ�
	// refa�� ���� �ٲ�� �ȴ�.
	Dragon dragona(100, 100, 100, a, 1000);

	dragona.ShowInfo();

	a = 120000;

	dragona.ShowInfo();



	return 0;
}