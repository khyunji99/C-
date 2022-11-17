#include <iostream>
#include <string>

using namespace std;

// class Ŭ������ {
//   ����Ÿ
// };


// ĸ��ȭ�� �⺻��å�� ��������
// Ŭ�������� ����� ���� �����ؾ��� �ʿ伺�� �ִ�.
// �� ������ �ϴ� ���� ����������
// private : ö���ϰ� ���⶧ ���, ������ ������� �ʰڴ�. (�⺻)
// protected : �ܺο��� �����ϴ� ���� ������� �ʰڴ�. 
//             �ڽ��� �����ϴ� ���� ����ϰڴ�.
// public : �ܺο� �����ϰڴ�.


// ��������� �ܺο��� �ٷ� �����ϴ� ���� ������� ����. (�ǰ����)
// ����Լ��� ���ؼ� ��������� �����ϰ� �϶�.
// �ܺο��� �ٷ� �����ϰ� �Ǹ� ���浵 �Ǳ� ���� �ٲ��
// �ȵǴ� ���� �߸��ؼ� ���� �ٲ� �� �ִ�.

class FifaSon {
private:  // ����������
	string teamName;  // ������� (��ü�� �Ӽ�)
	string position;
	float speed;
	string skill;
	string nation;
	int number;

public:
// Ŭ�����ȿ� ����� �Լ� : ����Լ�
// Ư���� ������� ���� ����(Set)�ϰų� ����(Get)���ִ� �Լ���
// Set/Get�Լ���� �Ѵ�.
// �ܺο��� ���� �����ؼ� �����ؾ��ϰų� ���� �޾ƾ��Ҷ�
// Set, Get �Լ��� ���� ����ϸ� �ȴ�.
// �׷��� ������ ������ �ʾƵ� �ȴ�.

	void SetTeamName(string value) {
		teamName = value;
	}

	string GetTeamName() {
		return teamName;
	}

	void SetPosition(string value) {
		position = value;
	}

	string GetPosition() {
		return position;
	}

// �̷��� �Լ��� ����� ����Ͽ� ��������� �����ϸ�
// ���� ���Ἲ�� ���� �� �ְ�
// ���� �߸��������� ��� ���Դ��� ã�� �����ϴ�.
	void SetSpeed(float value) {
		if (value > 12.0f) {
			speed = 12.0f;
		}
		else if (value < 8.0f) {
			speed = 9.0f;
		}
		else {
			speed = value;
		}
	}

	float GetSpeed() {
		return speed;
	}

	void SetSkill(string value) {
		skill = value;
	}

	string GetSkill() {
		return skill;
	}

	void SetNation(string value) {
		nation = value;
	}

	string GetNation() {
		return nation;
	}

	void SetNumber(int value) {
		number = value;
	}

	int GetNumber() {
		return number;
	}
};


int main() {
	FifaSon Sonh;

	Sonh.SetPosition("FW ���ݼ�");
	Sonh.SetSpeed(10.3);
	Sonh.SetTeamName("��Ʈ�� �ʽ��� FC");
	Sonh.SetSkill("����");
	Sonh.SetNation("���ѹα�");
	Sonh.SetNumber(7);


	cout << "������: " << Sonh.GetPosition() << endl;
	cout << "���ǵ�: " << Sonh.GetSpeed() << endl;
	cout << "����: " << Sonh.GetTeamName() << endl;
	cout << "��ų: " << Sonh.GetSkill() << endl;
	cout << "����: " << Sonh.GetNation() << endl;
	cout << "��ȣ: " << Sonh.GetNumber() << endl;



	return 0;
}