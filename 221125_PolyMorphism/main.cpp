#include <iostream>

using namespace std;

// Ŀ��ī��
// Ŀ��ī�� ���� ���α׷�
// Ŀ��ī���� �����帧�� �ľ�
// ����, å��

// Ŀ��ī���� ����
// Barista(�ٸ���Ÿ), Cashier(������ϴ� ���)
// Guest(�մ�)


class Drink {
private:
	string _name;

public:
	Drink(string name)
		: _name(name) {}

	string GetName() {
		return _name;
	}
};


class Coffee : public Drink {
public:
	Coffee()
		: Drink("Coffee") {}
};


class Latte : public Drink {
public:
	Latte()
		: Drink ("Latte") {}

};

// �Ƽ��� (���̽�Ƽ�� �� �߰�)
class AddaShotIcedTea : public Drink {
public:
	AddaShotIcedTea ()
		: Drink ("AShotChoo") {}

};

class HotChoco : public Drink {
public:
	HotChoco()
		: Drink("HotChoco") {}
};


class ColdBlue : public Drink {
public:
	ColdBlue()
		: Drink("ColdBlue") {}
};


class Barista {
public:
	void MakeDrink(Drink& drink) {
		cout << drink.GetName() << "�� ����ϴ�." << endl;
	}
};


class Cashier {  
private:
	Barista & _refBari;  // Brista�� Cashier�� ���԰���

	int _count;

public:
	Cashier(Barista& refBari)
		: _refBari(refBari), _count(0) {}

	void OrderingDrink(Drink& drink) {
		_count++;
		cout << drink.GetName() << "�� �ֹ��� �޽��ϴ�." << endl;
		_refBari.MakeDrink(drink);
	}

	int GetOrderCount() {
		return _count;
	}

};



class Guest { // �մ԰� ĳ�Ŵ� ���԰���� �ƴϴ�. ĳ���� ���忡���� �մ��� ��� �ٲ�� ������ ���԰����� ��ư� �׳� �����ϴ� ����..?
public:
	void OrderedDrink(Cashier& ref, Drink& drink) {  // ������ ���� (���԰���x) : �� �Լ��� �۵��Ǵ� ���ȿ��� ���谡 �ξ����� �Լ��� ������ ���赵 ������ �Ͻ����� ����
		cout << drink.GetName() << "�� �ֹ��� �մϴ�." << endl;
		ref.OrderingDrink(drink);
	}
};



int main() {
	Barista barista;
	Cashier cashier(barista);
	Guest guest;

	Coffee coffee;
	Latte latte;
	AddaShotIcedTea ashotchoo;
	HotChoco hotchoco;
	ColdBlue coldblue;

	guest.OrderedDrink(cashier, coffee);
	cout << endl;

	guest.OrderedDrink(cashier, latte);
	cout << endl;

	guest.OrderedDrink(cashier, ashotchoo);
	cout << endl;

	guest.OrderedDrink(cashier, hotchoco);
	cout << endl;

	guest.OrderedDrink(cashier, coldblue);


	return 0;
}