#include <iostream>

using namespace std;


// C������ ������ �̸��� �Լ��� ���� �� ����.
// C++������ ������ �̸��� �Լ��� ���� �� �ִ�.
// ���������δ� ����� �Լ��̸��� ���̹��� ��
// �Լ���� �Ű������� ����Ÿ Ÿ��, �Ű������� ������ �����Ѵ�.
// �� ���̹� ����� ���Ӹͱ۸� �̶�� �Ѵ�.
// �Լ��� ����Ÿ���� �Լ��� ���Ե��� �ʴ´�.


int add(int a, int b) {  // �� �Լ��� �Ҹ��� ���� : addXX
	return a + b;
}

/* �� �Լ��� ���� �Լ��� ���� ������ ���ֵȴ�.
float add(int a, int b) {
   return a + b;
}
*/

float add(float a, float b) {
	return a + b;
}

// �Ű������� ������ Ÿ���� �Լ��ڿ� XXX�� �ٿ��� ǥ���ȴ�.
int add(int a, int b, int c) {  // addXXX
	return a + b + c;
}


int main() {
	int a = 20;
	int b = 30;
	float c = 1.2f;
	float d = 3.4f;
	int e = 25;

	int ret = add(a, b);  // call addXX

	cout << a << " + " << b << " = " << ret << endl;

	float fret = add(c, d);  // call addYY

	cout << c << " + " << d << " = " << fret << endl;

	ret = add(a, b, e);  // call addXXX

	cout << a << " + " << b << " + " << e << " = " << ret << endl;



	return 0;
}