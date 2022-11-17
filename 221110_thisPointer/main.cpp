#include <iostream>
#include <string>

using namespace std;

class Pig {
private:
	string _name;
	float _age;
	float _weight;
	float _healthRate;

public:
	Pig(string name, float age, float weight, float healthRate)
		:_name(name), _age(age), _weight(weight), _healthRate(healthRate){}

	void ShowInfo() {
		cout << "ÀÌ¸§: " << this->_name << endl;
		cout << "³ªÀÌ: " << this->_age << endl;
		cout << "¸ö¹«°Ô: " << this->_weight << endl;
		cout << "°Ç°­Áö¼ö: " << this->_healthRate << endl;
		cout << "thisPointer: " << this << endl;
	}
};


int main() {
	Pig pig("µÅÁö", 1.8f, 150.0f, 80.0f);

	Pig pig2("µÅÁö2", 2.8f, 190.0f, 90.0f);

	pig.ShowInfo();

	pig2.ShowInfo();


	return 0;
}