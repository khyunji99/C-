#include <iostream>

using namespace std;

// Phone 클래스와 Computer 클래스를 만들고 다중상속을
// 시켜서 SmartPhone 클래스를 만들고 기능을 작동시켜 보시오.

class Phone {
private:
	string _type;
	string _phoneNumber;

public:
	Phone(string type, string phoneNumber)
		: _type(type), _phoneNumber(phoneNumber) {}

	string GetType() {
		return _type;
	}

	string GetNumber() {
		return _phoneNumber;
	}

	void NotUsingInternet(string usingType) {
		cout << usingType << "을 가지고는 인터넷 사용을 하지 못합니다." << endl;
	}

	void ListenMusic(string musicName) {
		cout << musicName << " 음악을 듣습니다." << endl;
	}

	void SendCall(string ownNumber, string sendNumber) {
		cout << ownNumber << " 번호에서" << sendNumber << " 번호로 전화를 겁니다." << endl;
	}

	void ReceiveCall(string number) {
		cout << number << " 번호로 전화가 왔습니다." << endl;
	}

	void SendMessage(string number, string message) {
		cout << _type << "을 가지고" << number << "번호로" <<  message << " 라는 문자를 보냅니다." << endl;
	}

	void ReceiveMessage(string number, string message) {
		cout << _type << "에" << number << "번호로" << message <<" 라고 문자가 왔습니다." << endl;
	}

};

class Computer {
private:
	string _type;
	string _id;

public:
	Computer(string type, string id)
		: _type(type), _id(id) {}

	string GetType() {
		return _type;
	}

	string GetID() {
		return _id;
	}


	void UsingInternet(string usingType) {
		cout <<  usingType << "을 가지고 인터넷을 사용합니다." << endl;
	}

	void ListenMusic(string musicName) {
		cout << musicName << " 음악을 듣습니다." << endl;
	}

	void ZoomMeeting(string type, string meetingTime) {
		cout << type << " 를 가지고 사람들과 " << meetingTime << "동안 화상통화를 합니다. " << endl;
	}

	void SendKaKaoTalk(string sendNumber, string message) {
		cout << sendNumber << " 번호로 " << message << " 라는 내용의 카톡을 보냅니다." << endl;
	}

	void ReceiveKaKaoTalk(string receiveNumber, string message) {
		cout << receiveNumber << " 번호로 " << message << " 라는 카톡이 왔습니다." << endl;
	}

	void WatchMovie(string ottName, string movieName) {
		cout << ottName << "에서 " <<  movieName << " 영화를 봅니다." << endl;
	}

	void WatchYoutube(string usingType,string vedioName) {
		cout << vedioName << " 영상을 " << usingType <<" 유튜브로 시청합니다." << endl;
	}

};

class SmartPhone : public Phone, public Computer {
private:
	string _type;
	string _smartPhoneNumber;

public:
	SmartPhone(string phoneType, string phoneNumber, string computerType, string id, string ownType, string smartPhoneNumber)
		: Phone(phoneType, phoneNumber), Computer(computerType, id), _type(ownType), _smartPhoneNumber(smartPhoneNumber) {}

	string GetType() {
		return _type;
	}

	string GetNumber() {
		return _smartPhoneNumber;
	}


	void UsingInternet(string usingType) {
		Computer::UsingInternet(usingType);
	}

	void ListenMusic(string musicName) {
		Phone::ListenMusic(musicName);
	}

	void ZoomMeeting(string type, string meetingTime) {
		Computer::ZoomMeeting(type, meetingTime);
	}

	void SendCall(string ownNumber, string sendNumber) {
		Phone::SendCall(ownNumber, sendNumber);
	}

	void ReceiveCall(string number) {
		Phone::ReceiveCall(number);
	}

	void SendKaKaoTalk(string sendNumber, string message) {
		Computer::SendKaKaoTalk(sendNumber, message);
	}

	void ReceiveKaKaoTalk(string receiveNumber, string message) {
		Computer::ReceiveKaKaoTalk(receiveNumber, message);
	}

	void WatchMovie(string ottName, string movieName) {
		Computer::WatchMovie(ottName, movieName);
	}

	void WatchYoutube(string usingType, string vedioName) {
		Computer::WatchYoutube(usingType, vedioName);
	}



};



int main() {

	SmartPhone smartPhone("캔디폰", "010-1234-5678", "삼성컴퓨터", "00325-98354-33980", "아이폰 12", "010-9745-3340");
	

	cout << "Phone Type : " << smartPhone.Phone::GetType() << endl;
	cout << "Phone Number : " << smartPhone.Phone::GetNumber() << endl;
	cout << "Computer Type : " << smartPhone.Computer::GetType() << endl;
	cout << "Copmuter ID : " << smartPhone.GetID() << endl;
	cout << "SmartPhone Type : " << smartPhone.GetType() << endl;
	cout << "SmartPhone Number : " << smartPhone.GetNumber() << endl;

	cout << endl;

	smartPhone.SendCall(smartPhone.GetNumber(), "010-1234-9876");
	
	cout << endl;

	smartPhone.Computer::ZoomMeeting("Computer", "20분");
	smartPhone.ZoomMeeting("smartPhone", "1시간");

	cout << endl;

	smartPhone.Phone::ReceiveMessage("010-3245-9907", "오랜만이이야 잘지내?");
	smartPhone.Computer::ReceiveKaKaoTalk("010-5555-6666", "보고싶다 친구야");
	smartPhone.ReceiveMessage("010-2876-6577", "뭐하고 지내?");

	cout << endl;

	smartPhone.Phone::ListenMusic("아름다운 강산");
	smartPhone.ListenMusic("다이너마이트");
	smartPhone.Computer::ListenMusic("나랑별보러가자");

	cout << endl;

	smartPhone.WatchYoutube(smartPhone.GetType(), "런닝맨 무편집본");
	smartPhone.Computer::WatchYoutube(smartPhone.Computer::GetType(), "무한도전 5분 순삭");

	cout << endl;

	smartPhone.Phone::NotUsingInternet(smartPhone.Phone::GetType());
	smartPhone.Computer::UsingInternet(smartPhone.Computer::GetType());
	smartPhone.UsingInternet(smartPhone.GetType());


	return 0;
}