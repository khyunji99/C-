#include <iostream>

using namespace std;


// 함수를 사용하려면 객체를 생성해서 만든 후
// 그 객체를 가지고 함수에 접근해서 함수를 사용한다.
// 하지만 정적멤버함수는 객체와 상관없이 수행되기 때문에
// 함수를 정적멤버함수로 만들어주면
// 매번 객체를 만들 필요 없이 (객체를 만들지 않아도)
// 바로 함수에 접근해서 사용할 수 있다.
// 정적멤버함수를 사용하면 이렇게 편리하기 때문에
// 자주 사용한다.


class Utillity {
public:

	// 정적 멤버 함수
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

	// 객체 생성
	Utillity util;

	// 객체 사용해서 add 함수 접근해서 사용
	cout << a << " + " << b << " = " << util.add(a, b) << endl;

	// 정적멤버함수로 만들어서 객체 없이 바로 sub함수에 접근해서 사용
	cout << a << " - " << b << " = " << Utillity::sub(a, b) << endl;


	return 0;
}