#include <iostream>

using namespace std;

// 커피카페
// 커피카페 관리 프로그램
// 커피카페의 업무흐름을 파악
// 역할, 책임

// 커피카페의 역할
// Barista(바리스타), Cashier(돈계산하는 사람)
// Guest(손님)


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

// 아샷추 (아이스티에 샷 추가)
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
		cout << drink.GetName() << "를 만듭니다." << endl;
	}
};


class Cashier {  
private:
	Barista & _refBari;  // Brista와 Cashier는 포함관계

	int _count;

public:
	Cashier(Barista& refBari)
		: _refBari(refBari), _count(0) {}

	void OrderingDrink(Drink& drink) {
		_count++;
		cout << drink.GetName() << "을 주문을 받습니다." << endl;
		_refBari.MakeDrink(drink);
	}

	int GetOrderCount() {
		return _count;
	}

};



class Guest { // 손님과 캐셔는 포함관계는 아니다. 캐셔의 입장에서는 손님은 계속 바뀌기 때문에 포함관계은 어렵고 그냥 의존하는 관계..?
public:
	void OrderedDrink(Cashier& ref, Drink& drink) {  // 의존적 관계 (포함관계x) : 이 함수가 작동되는 동안에만 관계가 맺어지고 함수가 끝나면 관계도 끝나는 일시적인 관계
		cout << drink.GetName() << "을 주문을 합니다." << endl;
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