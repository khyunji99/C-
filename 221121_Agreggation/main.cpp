#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Watch {
private:
	string _color;

public:
	Watch(string color)
		: _color(color)
	{
		cout << "---- Watch 생성자" << endl;
	}

	~Watch() {
		cout << "---- Watch 소멸자" << endl;
	}

	void ShowCurrentTime() {
		cout << "[ " << _color << "시계 현재 시간 ]" << endl;

		time_t timer;
		struct tm* t;
		
		timer = time(NULL);    // 현재 시간
		t = localtime(&timer);

		cout << t->tm_hour << "시 " << t->tm_min << "분 " << t->tm_sec << "초 입니다." << endl << endl;
	}
};



class Human {
private:
	Watch* _pWatch;

public:

	Human(Watch* pWatch)  // 포인터형으로 받는 것
		: _pWatch(pWatch)
	{
		cout << "---- Human 생성자" << endl;
	}

	~Human() {
		cout << "---- Human 소멸자" << endl;
	}


	void SetWatch(Watch* pWatch) {
		_pWatch = pWatch;
	}

	void ShowWatch() {
		_pWatch->ShowCurrentTime();
	}
};


int main() {

	// Agreggation : 포함된 객체가 생명주기를 달리 하는 경우 (약한 결합)
	// Composition과 달리 포함되는 생성자와 포함하는 생성자가
	// 같이 소멸되지 않는다.
	// 포함하는 생성자는 선언된 { } 이 끝나면 바로 소멸되지만
	// 포함되는 생성자는 프로그램이 종료 된 후
	// 즉, main함수가 끝날때 소멸된다.


	Watch redWatch("red");
	Watch blackWatch("black");

	cout << "Human 객체 생성" << endl;

	{
		Human human(&redWatch);

		human.ShowWatch();

		human.SetWatch(&blackWatch);

		human.ShowWatch();

	} // 이 닫는 괄호가 끝나면 Human 객체 소멸

	cout << "프로그램 종료" << endl;




	return 0;
} // main 함수가 끝나면 즉, 프로그램이 종료되면 포함된 생성자
  // Watch 생성자들 소멸된다. 