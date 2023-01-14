#include <iostream>
#include <string>

using namespace std;

class Human {
private:
	string _name;
	int _age;
	float _numSpeed;

public:
	Human(string name, int age, float numSpeed)
		:_name(name), _age(age), _numSpeed(numSpeed) {}

	// const �Լ���
	// ��������� ���� �������� �ʴ� �Լ��̴�.

	float GetRunSpeed() const {
		// _age = 100;  const Ű���带 �ٿ��� const�Լ��� �Ǿ age ��������� const ������ �ƴϹǷ� const �Լ� ���ο��� ����� �� ����.
		return _numSpeed;
	}

	string GetName() const {
		return _name;
	}

	void SetAge(int value) {
		_age = value;
	}

	void info() {
		cout << "�̸�: " << _name << endl;
		cout << "����: " << _age << endl;
		cout << "�޸��� �ӵ�: " << _numSpeed << endl;
	}
};

// const �Ű������� ���޵� ��ü�� const �Լ��� ȣ���� �����ϴ�.
// const �Լ��� �� �Լ� ���ο� const �Ű������� �� �� �ְ� ����� �� �ִ�.
void PrintRunSpeed(const Human & ref) {
	cout << ref.GetName() << "�� �޸��� �ӵ��� " << ref.GetRunSpeed() << "�Դϴ�." << endl;
}


int main() {

	Human human("�����", 32, 9.8f);
 
	PrintRunSpeed(human);

	// const Ű����
	// ������ ��ü�� ���� ������ ������ �� ����.
	// ������� �ǹ��Ѵ�.
	// �Լ����� ���ڰ����� �� ��ü�� ������(�ּҰ�)��
	// �ްԵǸ� ���� �ǵ��� ������� �� �������� ������
	// ���� �����ϰ� �ɼ��� �ִ�.
	// �׷��� const Ű���带 �����ָ� �̷��� �Ǽ���
	// ������ �� �ִ�.
	const Human human2("������", 24, 10.0f);

	human.info();

	return 0;
}
