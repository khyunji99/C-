#include <iostream>

using namespace std;

// Phone Ŭ������ Computer Ŭ������ ����� ���߻����
// ���Ѽ� SmartPhone Ŭ������ ����� ����� �۵����� ���ÿ�.

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
		cout << usingType << "�� ������� ���ͳ� ����� ���� ���մϴ�." << endl;
	}

	void ListenMusic(string musicName) {
		cout << musicName << " ������ ����ϴ�." << endl;
	}

	void SendCall(string ownNumber, string sendNumber) {
		cout << ownNumber << " ��ȣ����" << sendNumber << " ��ȣ�� ��ȭ�� �̴ϴ�." << endl;
	}

	void ReceiveCall(string number) {
		cout << number << " ��ȣ�� ��ȭ�� �Խ��ϴ�." << endl;
	}

	void SendMessage(string number, string message) {
		cout << _type << "�� ������" << number << "��ȣ��" <<  message << " ��� ���ڸ� �����ϴ�." << endl;
	}

	void ReceiveMessage(string number, string message) {
		cout << _type << "��" << number << "��ȣ��" << message <<" ��� ���ڰ� �Խ��ϴ�." << endl;
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
		cout <<  usingType << "�� ������ ���ͳ��� ����մϴ�." << endl;
	}

	void ListenMusic(string musicName) {
		cout << musicName << " ������ ����ϴ�." << endl;
	}

	void ZoomMeeting(string type, string meetingTime) {
		cout << type << " �� ������ ������ " << meetingTime << "���� ȭ����ȭ�� �մϴ�. " << endl;
	}

	void SendKaKaoTalk(string sendNumber, string message) {
		cout << sendNumber << " ��ȣ�� " << message << " ��� ������ ī���� �����ϴ�." << endl;
	}

	void ReceiveKaKaoTalk(string receiveNumber, string message) {
		cout << receiveNumber << " ��ȣ�� " << message << " ��� ī���� �Խ��ϴ�." << endl;
	}

	void WatchMovie(string ottName, string movieName) {
		cout << ottName << "���� " <<  movieName << " ��ȭ�� ���ϴ�." << endl;
	}

	void WatchYoutube(string usingType,string vedioName) {
		cout << vedioName << " ������ " << usingType <<" ��Ʃ��� ��û�մϴ�." << endl;
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

	SmartPhone smartPhone("ĵ����", "010-1234-5678", "�Ｚ��ǻ��", "00325-98354-33980", "������ 12", "010-9745-3340");
	

	cout << "Phone Type : " << smartPhone.Phone::GetType() << endl;
	cout << "Phone Number : " << smartPhone.Phone::GetNumber() << endl;
	cout << "Computer Type : " << smartPhone.Computer::GetType() << endl;
	cout << "Copmuter ID : " << smartPhone.GetID() << endl;
	cout << "SmartPhone Type : " << smartPhone.GetType() << endl;
	cout << "SmartPhone Number : " << smartPhone.GetNumber() << endl;

	cout << endl;

	smartPhone.SendCall(smartPhone.GetNumber(), "010-1234-9876");
	
	cout << endl;

	smartPhone.Computer::ZoomMeeting("Computer", "20��");
	smartPhone.ZoomMeeting("smartPhone", "1�ð�");

	cout << endl;

	smartPhone.Phone::ReceiveMessage("010-3245-9907", "���������̾� ������?");
	smartPhone.Computer::ReceiveKaKaoTalk("010-5555-6666", "����ʹ� ģ����");
	smartPhone.ReceiveMessage("010-2876-6577", "���ϰ� ����?");

	cout << endl;

	smartPhone.Phone::ListenMusic("�Ƹ��ٿ� ����");
	smartPhone.ListenMusic("���̳ʸ���Ʈ");
	smartPhone.Computer::ListenMusic("��������������");

	cout << endl;

	smartPhone.WatchYoutube(smartPhone.GetType(), "���׸� ��������");
	smartPhone.Computer::WatchYoutube(smartPhone.Computer::GetType(), "���ѵ��� 5�� ����");

	cout << endl;

	smartPhone.Phone::NotUsingInternet(smartPhone.Phone::GetType());
	smartPhone.Computer::UsingInternet(smartPhone.Computer::GetType());
	smartPhone.UsingInternet(smartPhone.GetType());


	return 0;
}