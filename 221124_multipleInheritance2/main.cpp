#include <iostream>
#include <string>

using namespace std;


class Lion {
private:
	string _name;

public:
	Lion(string name)
		: _name(name) {}

	string GetName() {
		return _name;
	}

	void GetSound() {
		cout << "À¸¸£··" << endl;
	}
};


class Tiger {
private:
	string _name;

public:
	Tiger(string name)
		: _name(name) {}

	string GetName() {
		return _name;
	}

	void GetSound() {
		cout << "¾îÈË" << endl;
	}
};


class Liger : public Tiger, public Lion {
private:
	string _name;

public:
	Liger(string myName, string motherName, string fatherName)
		: _name(myName), Tiger(motherName), Lion(fatherName) {}

	
	string GetMotherName() {
		return Tiger::GetName();
	}

	string GetFatherName() {
		return Lion::GetName();
	}

	string GetName() {
		return _name;
	}

	void GetSound() {
		cout << "¾îÈÄ¿õ" << endl;
	}
};


int main() {

	Liger liger("¶óÀÌ°Å", "Å¸ÀÌ°Å", "»çÀÚ");

	cout << "liger your motherName = " << liger.GetMotherName() << endl;
	cout << "liger your fatherName = " << liger.GetFatherName() << endl;
	cout << "liger myName = " << liger.GetName() << endl;
	
	liger.GetSound();

	return 0;
}