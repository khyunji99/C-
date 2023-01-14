#include <iostream>

using namespace std;

int main() {

	int a;
	a = 20;

	cout << "&a = " << &a << endl;

	int* pa;    // 포인터형 지정자
	pa = &a;

	int** ppa;
	ppa = &pa;

	**ppa;
	**&pa;
	*pa;
	*&a;
	a;

	cout << "주소값 확인" << endl;
	cout << "&**ppa = " << &**ppa << endl;
	cout << "&**&pa = " << &**&pa << endl;
	cout << "&*pa = " << &*pa << endl;
	cout << "&*&a = " << &*&a << endl;
	cout << "&a = " << &a << endl << endl;

	cout << "저장된 값을 확인" << endl;
	cout << "**ppa = " << **ppa << endl;
	cout << "**&pa = " << **&pa << endl;
	cout << "*pa = " << *pa << endl;
	cout << "*&a = " << *&a << endl;
	cout << "a = " << a << endl;


	return 0;
}