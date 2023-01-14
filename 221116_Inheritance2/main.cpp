#include <iostream>
#include <string>

using namespace std;

class ExtString : public std::string {
public:
	ExtString(char* str)
		: std::string(str) {}

	ExtString(const char* str)
		: std::string(str) {}

	int GetLength() {
		const char* ptr = c_str();

		int count = 0;

		for (count = 0; ptr[count] != 0; count++);

		return count;
	}
};


int main() {

	ExtString str((char*)"monster");

	cout << str << "�� ������ ������ " << str.GetLength() << "�Դϴ�." << endl;

	ExtString str2 = "i am a monster!!";

	cout << str2 << "�� ������ ������ " << str2.GetLength() << "�Դϴ�." << endl;

	cout << str + " " + str2 << endl;



	return 0;
}