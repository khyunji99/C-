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


	// 복사생성자 ( 자기타입을 인자로 받는 생성자)
	// 자기 자신의 타입과 같은 DynamicArray 타입인
	// 인자 &ref를 받고 있는 것
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

	// array에 3의 배수 값 넣기
	for (int i = 0; i < array.GetSize(); i++) {
		array.SetValue(i, i*3);
	}


	DynamicArray array2(array);    // 복사 생성자
	// DynamicArray array2 = array;  이것과 위의 코드는 같은 것이다. 똑같이 복사생성자로 복사하는 것이다.


	array2.SetValue(5, 10000);     // array를 array2에 복사하고 후에 array2의 5번 인덱스의 값을 10000으로 변경


	cout << "array" << endl;
	for (int i = 0; i < array.GetSize(); i++) {
		cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
	}
	cout << endl;


	// 앞에서 array2의 5번째 인덱스의 값을 10000으로 바꿨기 때문에
	// 5번 인덱스 값만 다르고 그 외 다른 인덱스의 값들은 array와 같게 출력된다.
	cout << "array2" << endl;
	for (int i = 0; i < array2.GetSize(); i++) {
		cout << "array[" << i << "] = " << array2.GetIndex(i) << endl;
	}


	return 0;
}