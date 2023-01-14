#include <iostream>

using namespace std;


// 자식의 타입으로 만든 객체를 부모의 타입에 대입이 가능하다.
// 하지만 반대로 부모의 타입으로 만든 객체를 자식의 타입에
// 대입하는 것은 기본적으로 불가능하다.
// 자식타입-> 부모 이러한 것을 업캐스팅이라고 한다.
// 부모의 참조 타입, 포인터 타입에 자식 객체를 넣는 것 : 업캐스팅


class Parent {
protected:
	int _value;
	int _value2;

public:
	Parent(int value, int value2)   // 생성자
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

	// 업캐스팅
	// 부모의 타입으로 자식의 타입을 대입받는 것 
	a = b;   // 업캐스팅

	a.ShowInfo();


	// 다운캐스팅
	// 부모의 타입으로 자식 타입에 대입을 하는 경우
	// b = a;     // 다운캐스팅은 기본적으로 허용이 안된다.
	              // 하지만 아래와 같은 경우에는 허용이 된다.




	cout << "참조타입인 경우" << endl;

	// 업캐스팅
	// Child1타입의 객체를 Parent 참조형 변수에 대입
	Parent& refb = b;

	refb.ShowInfo();


	// 다운캐스팅
	// Parent타입 refb 참조형 변수를 Child1형으로 변환해서
	// rrefb 참조형 변수에 대입4
	Child1& rrefb = (Child1&)refb;


	rrefb.ShowInfo();   // 만일 Child1 클래스에 ShowInfo() 함수가 없다면
	                    // Parent 클래스에 있는 ShowInfo() 함수가 호출될 것이다.



	cout << "포인터 타입인 경우" << endl;

	b.Init(1000, 2000, 3000, 4000);

	// 업캐스팅
	Parent* pb = &b;

	pb->ShowInfo();

	// 다운캐스팅
	Child1* ppb = (Child1*)pb;

	ppb->ShowInfo();

	return 0;
}