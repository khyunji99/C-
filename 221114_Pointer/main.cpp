#include <iostream>

using namespace std;

int main() {

	int a;
	a = 20;

	cout << "&a = " << &a << endl;

	int* pa;    // �������� ������
	pa = &a;

	int** ppa;
	ppa = &pa;

	**ppa;
	**&pa;
	*pa;
	*&a;
	a;

	cout << "�ּҰ� Ȯ��" << endl;
	cout << "&**ppa = " << &**ppa << endl;
	cout << "&**&pa = " << &**&pa << endl;
	cout << "&*pa = " << &*pa << endl;
	cout << "&*&a = " << &*&a << endl;
	cout << "&a = " << &a << endl << endl;

	cout << "����� ���� Ȯ��" << endl;
	cout << "**ppa = " << **ppa << endl;
	cout << "**&pa = " << **&pa << endl;
	cout << "*pa = " << *pa << endl;
	cout << "*&a = " << *&a << endl;
	cout << "a = " << a << endl;


	return 0;
}