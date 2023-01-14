#include <iostream>
#include <string>

using namespace std;

class Human {
private:
	string _name;
	int _age;
	float _numSpeed;

public:
	Human(string name, int age, float numSpeed)
		:_name(name), _age(age), _numSpeed(numSpeed) {}

	// const 함수는
	// 멤버변수의 값을 변경하지 않는 함수이다.

	float GetRunSpeed() const {
		// _age = 100;  const 키워드를 붙여서 const함수가 되어서 age 멤버변수는 const 변수가 아니므로 const 함수 내부에서 사용할 수 없다.
		return _numSpeed;
	}

	string GetName() const {
		return _name;
	}

	void SetAge(int value) {
		_age = value;
	}

	void info() {
		cout << "이름: " << _name << endl;
		cout << "나이: " << _age << endl;
		cout << "달리기 속도: " << _numSpeed << endl;
	}
};

// const 매개변수로 전달된 객체는 const 함수만 호출이 가능하다.
// const 함수는 그 함수 내부에 const 매개변수만 들어갈 수 있고 사용할 수 있다.
void PrintRunSpeed(const Human & ref) {
	cout << ref.GetName() << "의 달리기 속도는 " << ref.GetRunSpeed() << "입니다." << endl;
}


int main() {

	Human human("손흥민", 32, 9.8f);
 
	PrintRunSpeed(human);

	// const 키워드
	// 생성된 객체에 들어가는 값들을 변경할 수 없다.
	// 상수성을 의미한다.
	// 함수에서 인자값으로 그 객체의 참조값(주소값)을
	// 받게되면 나의 의도와 상관없이 그 참조값을 가지고
	// 값을 변경하게 될수도 있다.
	// 그럴때 const 키워드를 적어주면 이러한 실수를
	// 예방할 수 있다.
	const Human human2("길현지", 24, 10.0f);

	human.info();

	return 0;
}
