#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string _name;
	int _age;
	int _grade;
	int _classNum;

	// ���������� ������������ ������ �޴´�.
	// ��ó�� private ���������ڸ� ���̸� �������������
	// ������ ���ϰ� �ǹǷ� set, get �Լ��� ���ؼ� �����ؾ��Ѵ�.

	static int Count;         // ���� ������� ( = Ŭ���� ����)

public:
	
	// static ������ �������� ���� �� �ִ°��� �ƴ϶�
	// �Ʒ��� ���� �Լ����� ���� �� �ִ�.
	// �Լ��� static ���� ���̸� ��������Լ���� �Ѵ�.
	// Ŭ���� �Լ���� �θ���.
	// ��������Լ��� ��ü ������ �����ϰ� �۵���ų �� �ִµ�
	// ������������� ��ü�� �����Ǿ� �Ҵ��� �� �� ���������.
	// �׷��� ��������Լ��� ������������� ��� �����Ϸ��� �ϸ�
	// �� ������������� ��ü�� ������ �ƴ��� �� �� ���� �ȴ�.

	static int GetCount() {   // ���� ����Լ� ( = Ŭ�����Լ�)
		return Count;
		// ���� ���� ����Լ� �ȿ��� ��������� �����ϸ� �ȵȴ�.
	}


	Student(string name, int age, int grade, int classNum)
		:_name(name), _age(age), _grade(grade), _classNum(classNum)
	{
		Count++;
	}

	~Student() {
		Count--;
	}


	void ShowInfo() {
		cout << "�̸�: " << _name << endl;
		cout << "����: " << _age << endl;
		cout << "�г�: " << _grade << endl;
		cout << "��: " << _classNum << endl;
		cout << "�л���: " << Count << endl << endl;
	}
};


// ����������� Count�� ������ ��ü �ȿ� ���ؼ� ��������� �ʰ�
// Student Ŭ���� �ȿ� ���������.
// Ŭ������ �ڿ� :: �� �ٿ��ְ� ������������� ������
// ����������� �ʱ�ȭ �ϴ� �� �̴�.
// Student Ŭ������ �����ִ� ����������� Count������ 0����
// �ʱ�ȭ �Ǿ��ٴ� ���� �ǹ��Ѵ�.
int Student:: Count = 0;

int main() {

	Student st1("����", 18, 3, 3);

	//st1.ShowInfo();

	cout << "Student::Count = " << Student::GetCount() << endl;

	{
		Student st2("����2", 17, 2, 10);

	//	st2.ShowInfo();

		cout << "Student::Count = " << Student::GetCount() << endl;
	}


	Student st3("����3", 16, 1, 11);

	//st3.ShowInfo();

	cout << "Student::Count = " << Student::GetCount() << endl;



	return 0;
}