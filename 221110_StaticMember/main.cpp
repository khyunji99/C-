#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string _name;
	int _age;
	int _grade;
	int _classNum;

	// 정적변수는 접근제어자의 영향을 받는다.
	// 이처럼 private 접근제어자를 붙이면 정적멤버변수에
	// 접근을 못하게 되므로 set, get 함수를 통해서 접근해야한다.

	static int Count;         // 정적 멤버변수 ( = 클래스 변수)

public:
	
	// static 예약어는 변수에만 붙일 수 있는것이 아니라
	// 아래와 같이 함수에도 붙일 수 있다.
	// 함수에 static 예약어를 붙이면 정적멤버함수라고 한다.
	// 클래스 함수라고도 부른다.
	// 정적멤버함수는 객체 생성과 무관하게 작동시킬 수 있는데
	// 정적멤버변수는 객체가 생성되어 할당이 될 때 만들어진다.
	// 그래서 정적멤버함수에 정적멤버변수를 적어서 접근하려고 하면
	// 그 정적멤버변수는 객체의 것인지 아닌지 알 수 없게 된다.

	static int GetCount() {   // 정적 멤버함수 ( = 클래스함수)
		return Count;
		// 따라서 정적 멤버함수 안에서 멤버변수에 접근하면 안된다.
	}


	Student(string name, int age, int grade, int classNum)
		:_name(name), _age(age), _grade(grade), _classNum(classNum)
	{
		Count++;
	}

	~Student() {
		Count--;
	}


	void ShowInfo() {
		cout << "이름: " << _name << endl;
		cout << "나이: " << _age << endl;
		cout << "학년: " << _grade << endl;
		cout << "반: " << _classNum << endl;
		cout << "학생수: " << Count << endl << endl;
	}
};


// 정적멤버변수 Count는 각각의 객체 안에 속해서 만들어지지 않고
// Student 클래스 안에 만들어진다.
// 클래스명 뒤에 :: 를 붙여주고 정적멤버변수를 적으면
// 정적멤버변수 초기화 하는 것 이다.
// Student 클래스에 속해있는 정적멤버변수 Count변수가 0으로
// 초기화 되었다는 것을 의미한다.
int Student:: Count = 0;

int main() {

	Student st1("몬스터", 18, 3, 3);

	//st1.ShowInfo();

	cout << "Student::Count = " << Student::GetCount() << endl;

	{
		Student st2("몬스터2", 17, 2, 10);

	//	st2.ShowInfo();

		cout << "Student::Count = " << Student::GetCount() << endl;
	}


	Student st3("몬스터3", 16, 1, 11);

	//st3.ShowInfo();

	cout << "Student::Count = " << Student::GetCount() << endl;



	return 0;
}