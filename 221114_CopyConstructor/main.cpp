#include <iostream>

using namespace std;


class A {
private:
	int _value;
	int _value2;

public:
	A(int value, int value2)
		: _value(value), _value2(value2) {}
};


class DynamicArray {
private:
	int* _parr;
	int _size;

public:
	DynamicArray(int size)
		:_size(size) {
		_parr = new int[_size];
	}


	// ��������� ( �ڱ�Ÿ���� ���ڷ� �޴� ������)
	// �ڱ� �ڽ��� Ÿ�԰� ���� DynamicArray Ÿ����
	// ���� &ref�� �ް� �ִ� ��
	DynamicArray(DynamicArray & ref) {
		cout << "DynamicArray Copy Constructor" << endl;

		_size = ref._size;

		_parr = new int[_size];

		for (int i = 0; i < _size; i++) {
			_parr[i] = ref._parr[i];
		}
	}



	~DynamicArray() {
		delete[] _parr;
	}

	int GetSize() {
		return _size;
	}

	void SetValue(int index, int value) {
		_parr[index] = value;
	}

	int GetIndex(int index) {
		return _parr[index];
	}
};


int main() {
	DynamicArray array(10);

	// array�� 3�� ��� �� �ֱ�
	for (int i = 0; i < array.GetSize(); i++) {
		array.SetValue(i, i*3);
	}


	DynamicArray array2(array);    // ���� ������
	// DynamicArray array2 = array;  �̰Ͱ� ���� �ڵ�� ���� ���̴�. �Ȱ��� ��������ڷ� �����ϴ� ���̴�.


	array2.SetValue(5, 10000);     // array�� array2�� �����ϰ� �Ŀ� array2�� 5�� �ε����� ���� 10000���� ����


	cout << "array" << endl;
	for (int i = 0; i < array.GetSize(); i++) {
		cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
	}
	cout << endl;


	// �տ��� array2�� 5��° �ε����� ���� 10000���� �ٲ�� ������
	// 5�� �ε��� ���� �ٸ��� �� �� �ٸ� �ε����� ������ array�� ���� ��µȴ�.
	cout << "array2" << endl;
	for (int i = 0; i < array2.GetSize(); i++) {
		cout << "array[" << i << "] = " << array2.GetIndex(i) << endl;
	}


	return 0;
}