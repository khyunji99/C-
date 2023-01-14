#include <iostream>

using namespace std;


class Heart {
private:
	float _heartRate;

public:
	Heart(float rate)
		: _heartRate(rate)
	{
		cout << "---- Heart ������" << endl;
	}

	~Heart() {
		cout << "---- Heart �Ҹ���" << endl;
	}


	void ShowInfo() {
		cout << _heartRate << "�� ������ �ٰ� �ֽ��ϴ�." << endl;
	}
};


class Eye {
private:
	float _sight;

public:
	Eye(float sight)
		: _sight(sight)
	{
		cout << "---- Eye ������" << endl;
	}

	~Eye() {
		cout << "---- Eye �Ҹ���" << endl;
	}


	void ShowStatus() {
		cout << _sight << "�� �÷��� ������ �ֽ��ϴ�." << endl;
	}
};



class Human {
private:
	Heart _heart;
	Eye _leftEye, _rightEye;

public:
	Human(float heartRate, float leftSight, float rightSight)
		: _heart(heartRate), _leftEye(leftSight), _rightEye(rightSight)
	{
		cout << "---- Human ������" << endl;
	}

	~Human() {
		cout << "---- Human �Ҹ���" << endl;
	}


	void CheckHealthStatus() {
		_heart.ShowInfo();
		
		cout << "���� ��";
		_leftEye.ShowStatus();

		cout << "������ ��";
		_rightEye.ShowStatus();
	}
};



int main() {
	
	// Composition : ���Ե� ��ü�� �����ֱ⸦ ���� �Ҷ� (���� ����)
	// ���ԵǴ� �����ڰ� ���� �����ǰ� �����ϴ� �����ڴ� ��������
	// �����ȴ�. �ݴ�� �Ҹ�� ���� �����ϴ� �����ڰ� ���� �Ҹ�ǰ�
	// ���ԵǴ� �����ڰ� ���߿� �Ҹ�ȴ�.

	cout << "Human ��ü ����" << endl;

	{
		Human human(60, 1.5f, 1.3f);

		human.CheckHealthStatus();
	}

	cout << "���α׷� ����" << endl;


	return 0;
}