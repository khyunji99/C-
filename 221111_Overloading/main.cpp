#include <iostream>

using namespace std;


// C언어에서는 동일한 이름의 함수를 만들 수 없다.
// C++언어에서는 동일한 이름의 함수를 만들 수 있다.
// 내부적으로는 사용할 함수이름을 네이밍할 때
// 함수명과 매개변수의 데이타 타입, 매개변수의 개수를 포함한다.
// 이 네이밍 방법을 네임맹글링 이라고 한다.
// 함수의 리턴타입은 함수명에 포함되지 않는다.


int add(int a, int b) {  // 이 함수가 불리는 네임 : addXX
	return a + b;
}

/* 이 함수는 위의 함수와 같은 것으로 간주된다.
float add(int a, int b) {
   return a + b;
}
*/

float add(float a, float b) {
	return a + b;
}

// 매개변수의 개수와 타입을 함수뒤에 XXX로 붙여서 표현된다.
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