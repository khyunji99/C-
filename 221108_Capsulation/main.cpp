#include <iostream>
#include <string>

using namespace std;

// 대상에서 내가 필요한 정보를 취해서 단순화시키는 것
// 추상화 라고 한다.


// class 클래스명 {
// 단순화한 데이터를 나열;
// };
// 캡슐화(Capsulazation) -> DataType
// Son 이라는 클래스형 데이타타입을 만들었다.
// Son 데이타타입을 가지고 변수를 만들 수 있다.

class Son {
public:
	string jumin; // 멤버변수
	string name;
	int age;
	string address;
};


int main() {
	// 클래스형 데이터타입으로 만들어진 변수 = 객체(object)
	Son sonh;
	sonh.jumin = "9610301068111";
	sonh.name = "손흥민";
	sonh.age = 31;
	sonh.address = "런던";


	// 출력하기
	cout << "주민번호: " << sonh.jumin << endl;
	cout << "이름: " << sonh.name << endl;
	cout << "나이: " << sonh.age << endl;
	cout << "주소: " << sonh.address << endl;


	return 0;
}
// 객체지향 : 객체끼리 프로그램 안에서 상호작용하는 것
// 인스턴스(instance) : 객체가 메모리에 저장되어 존재하는 것
// 대상객체(Object) : 상상할 수 있는 모든것이면서 데이터화 할 수 있는것
// 객체지향 프로그래밍
// Object(대상객체) -> 추상화 -> object(객체)-> instance ->캡슐화