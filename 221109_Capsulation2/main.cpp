#include <iostream>
#include <string>

using namespace std;

// class 클래스명 {
//   데이타
// };


// 캡슐화의 기본정책은 정보은닉
// 클래스안의 멤버의 접근 제어해야할 필요성이 있다.
// 이 역할을 하는 것이 접근제어자
// private : 철저하게 감출때 사용, 접근을 허용하지 않겠다. (기본)
// protected : 외부에서 접근하는 것은 허용하지 않겠다. 
//             자식이 접근하는 것은 허용하겠다.
// public : 외부에 공개하겠다.


// 멤버변수는 외부에서 바로 접근하는 것을 허용하지 마라. (권고사항)
// 멤버함수를 통해서 멤버변수에 접근하게 하라.
// 외부에서 바로 접근하게 되면 변경도 되기 쉽고 바뀌면
// 안되는 값이 잘못해서 값이 바뀔 수 있다.

class FifaSon {
private:  // 접근제어자
	string teamName;  // 멤버변수 (객체의 속성)
	string position;
	float speed;
	string skill;
	string nation;
	int number;

public:
// 클래스안에 선언된 함수 : 멤버함수
// 특별히 멤버변수 값을 변경(Set)하거나 리턴(Get)해주는 함수를
// Set/Get함수라고 한다.
// 외부에서 값에 접근해서 변경해야하거나 리턴 받아야할때
// Set, Get 함수를 만들어서 사용하면 된다.
// 그렇지 않으면 만들지 않아도 된다.

	void SetTeamName(string value) {
		teamName = value;
	}

	string GetTeamName() {
		return teamName;
	}

	void SetPosition(string value) {
		position = value;
	}

	string GetPosition() {
		return position;
	}

// 이렇게 함수를 만들어 사용하여 멤버변수에 접근하면
// 값의 무결성을 정할 수 있고
// 값이 잘못들어왔을때 어디서 들어왔는지 찾기 용이하다.
	void SetSpeed(float value) {
		if (value > 12.0f) {
			speed = 12.0f;
		}
		else if (value < 8.0f) {
			speed = 9.0f;
		}
		else {
			speed = value;
		}
	}

	float GetSpeed() {
		return speed;
	}

	void SetSkill(string value) {
		skill = value;
	}

	string GetSkill() {
		return skill;
	}

	void SetNation(string value) {
		nation = value;
	}

	string GetNation() {
		return nation;
	}

	void SetNumber(int value) {
		number = value;
	}

	int GetNumber() {
		return number;
	}
};


int main() {
	FifaSon Sonh;

	Sonh.SetPosition("FW 공격수");
	Sonh.SetSpeed(10.3);
	Sonh.SetTeamName("토트넘 훗스퍼 FC");
	Sonh.SetSkill("슈팅");
	Sonh.SetNation("대한민국");
	Sonh.SetNumber(7);


	cout << "포지션: " << Sonh.GetPosition() << endl;
	cout << "스피드: " << Sonh.GetSpeed() << endl;
	cout << "팀명: " << Sonh.GetTeamName() << endl;
	cout << "스킬: " << Sonh.GetSkill() << endl;
	cout << "국적: " << Sonh.GetNation() << endl;
	cout << "번호: " << Sonh.GetNumber() << endl;



	return 0;
}