#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Watch {
private:
	string _color;

public:
	Watch(string color)
		: _color(color)
	{
		cout << "---- Watch ������" << endl;
	}

	~Watch() {
		cout << "---- Watch �Ҹ���" << endl;
	}

	void ShowCurrentTime() {
		cout << "[ " << _color << "�ð� ���� �ð� ]" << endl;

		time_t timer;
		struct tm* t;
		
		timer = time(NULL);    // ���� �ð�
		t = localtime(&timer);

		cout << t->tm_hour << "�� " << t->tm_min << "�� " << t->tm_sec << "�� �Դϴ�." << endl << endl;
	}
};



class Human {
private:
	Watch* _pWatch;

public:

	Human(Watch* pWatch)  // ������������ �޴� ��
		: _pWatch(pWatch)
	{
		cout << "---- Human ������" << endl;
	}

	~Human() {
		cout << "---- Human �Ҹ���" << endl;
	}


	void SetWatch(Watch* pWatch) {
		_pWatch = pWatch;
	}

	void ShowWatch() {
		_pWatch->ShowCurrentTime();
	}
};


int main() {

	// Agreggation : ���Ե� ��ü�� �����ֱ⸦ �޸� �ϴ� ��� (���� ����)
	// Composition�� �޸� ���ԵǴ� �����ڿ� �����ϴ� �����ڰ�
	// ���� �Ҹ���� �ʴ´�.
	// �����ϴ� �����ڴ� ����� { } �� ������ �ٷ� �Ҹ������
	// ���ԵǴ� �����ڴ� ���α׷��� ���� �� ��
	// ��, main�Լ��� ������ �Ҹ�ȴ�.


	Watch redWatch("red");
	Watch blackWatch("black");

	cout << "Human ��ü ����" << endl;

	{
		Human human(&redWatch);

		human.ShowWatch();

		human.SetWatch(&blackWatch);

		human.ShowWatch();

	} // �� �ݴ� ��ȣ�� ������ Human ��ü �Ҹ�

	cout << "���α׷� ����" << endl;




	return 0;
} // main �Լ��� ������ ��, ���α׷��� ����Ǹ� ���Ե� ������
  // Watch �����ڵ� �Ҹ�ȴ�. 