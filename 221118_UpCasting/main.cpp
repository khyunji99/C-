#include <iostream>

using namespace std;


// �ڽ��� Ÿ������ ���� ��ü�� �θ��� Ÿ�Կ� ������ �����ϴ�.
// ������ �ݴ�� �θ��� Ÿ������ ���� ��ü�� �ڽ��� Ÿ�Կ�
// �����ϴ� ���� �⺻������ �Ұ����ϴ�.
// �ڽ�Ÿ��-> �θ� �̷��� ���� ��ĳ�����̶�� �Ѵ�.
// �θ��� ���� Ÿ��, ������ Ÿ�Կ� �ڽ� ��ü�� �ִ� �� : ��ĳ����


class Parent {
protected:
	int _value;
	int _value2;

public:
	Parent(int value, int value2)   // ������
		: _value(value), _value2(value2) {}

	void Init(int value, int value2) {
		_value = value;
		_value2 = value2;
	}

	void ShowInfo() {
		cout << "Parent::ShowInfo" << endl;
		cout << "_value = " << _value << endl;
		cout << "_value2 = " << _value2 << endl;

	}


};


class Child1 : public Parent {
private:
	int _value3;
	int _value4;

public:
	Child1(int value, int value2, int value3, int value4)
		:Parent(value, value2), _value3(value3), _value4(value4) {}


	void Init(int value, int value2, int value3, int value4) {
		_value = value;
		_value2 = value2;
		_value3 = value3;
		_value4 = value4;
	}

	void ShowInfo() {
		cout << "Child1::ShowInfo()" << endl;
		cout << "_value = " << _value << endl;
		cout << "_value2 = " << _value2 << endl;
		cout << "_value3 = " << _value3 << endl;
		cout << "_value4 = " << _value4 << endl;
	}

};





int main() {

	Parent a(10, 20);
	Child1 b(100, 200, 300, 400);


	// Child1 &ref = a;

	a.ShowInfo();

	// ��ĳ����
	// �θ��� Ÿ������ �ڽ��� Ÿ���� ���Թ޴� �� 
	a = b;   // ��ĳ����

	a.ShowInfo();


	// �ٿ�ĳ����
	// �θ��� Ÿ������ �ڽ� Ÿ�Կ� ������ �ϴ� ���
	// b = a;     // �ٿ�ĳ������ �⺻������ ����� �ȵȴ�.
	              // ������ �Ʒ��� ���� ��쿡�� ����� �ȴ�.




	cout << "����Ÿ���� ���" << endl;

	// ��ĳ����
	// Child1Ÿ���� ��ü�� Parent ������ ������ ����
	Parent& refb = b;

	refb.ShowInfo();


	// �ٿ�ĳ����
	// ParentŸ�� refb ������ ������ Child1������ ��ȯ�ؼ�
	// rrefb ������ ������ ����4
	Child1& rrefb = (Child1&)refb;


	rrefb.ShowInfo();   // ���� Child1 Ŭ������ ShowInfo() �Լ��� ���ٸ�
	                    // Parent Ŭ������ �ִ� ShowInfo() �Լ��� ȣ��� ���̴�.



	cout << "������ Ÿ���� ���" << endl;

	b.Init(1000, 2000, 3000, 4000);

	// ��ĳ����
	Parent* pb = &b;

	pb->ShowInfo();

	// �ٿ�ĳ����
	Child1* ppb = (Child1*)pb;

	ppb->ShowInfo();

	return 0;
}