#include <iostream>

using namespace std;


// �Լ��� ����Ϸ��� ��ü�� �����ؼ� ���� ��
// �� ��ü�� ������ �Լ��� �����ؼ� �Լ��� ����Ѵ�.
// ������ ��������Լ��� ��ü�� ������� ����Ǳ� ������
// �Լ��� ��������Լ��� ������ָ�
// �Ź� ��ü�� ���� �ʿ� ���� (��ü�� ������ �ʾƵ�)
// �ٷ� �Լ��� �����ؼ� ����� �� �ִ�.
// ��������Լ��� ����ϸ� �̷��� ���ϱ� ������
// ���� ����Ѵ�.


class Utillity {
public:

	// ���� ��� �Լ�
	static int add(int a, int b) {
		return a + b;
	}

	static int sub(int a, int b) {
		return a - b;
	}
};



int main() {
	int a = 20;
	int b = 30;

	// ��ü ����
	Utillity util;

	// ��ü ����ؼ� add �Լ� �����ؼ� ���
	cout << a << " + " << b << " = " << util.add(a, b) << endl;

	// ��������Լ��� ���� ��ü ���� �ٷ� sub�Լ��� �����ؼ� ���
	cout << a << " - " << b << " = " << Utillity::sub(a, b) << endl;


	return 0;
}