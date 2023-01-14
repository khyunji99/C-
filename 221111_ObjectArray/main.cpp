#include <iostream>

using namespace std;

class Monster {
private:
    int _health;
    int _attack;
    int _defense;
    int _speed;


public:
    Monster()  // 멤버변수의 디폴트값을 () 안에 정수형 데이터타입 아무거나 넣어서 지정해주면 된다.
        : _health(0), _attack(0), _defense(0), _speed(10)
    {
        cout << "Monster 기본생성자" << endl;
    }

    Monster(int health, int attack, int defense, int speed)
        : _health(health), _attack(attack), _defense(defense), _speed(speed)
    {
        cout << "Monster 생성자" << endl;
    }

    ~Monster() {
        cout << "Monster 소멸자" << endl;
    }


    // 배열의 초기값 설정해주는 함수
    void Init(int health, int attack, int defense, int speed) {
        _health = health;
        _attack = attack;
        _defense = defense;
        _speed = speed;
    }


    void Attack() {
        cout << _attack << "의 공격력으로 공격" << endl;
    }

    void Run() {
        cout << _speed << "의 속도로 달린다" << endl;
    }

    void ShowInfo() {
        cout << "생명력: " << _health << endl;
        cout << "공격력: " << _attack << endl;
        cout << "방어력: " << _defense << endl;
        cout << "속도: " << _speed << endl;
    }

};


// 객체 배열 : 동일한 여러개의 객체들을 넣은 배열
// 배열은 기본 생성자가 있어야 사용할 수 있다.
// 객체 배열에 바로 초기값을 넣어줄 수 없으므로 Init함수를
// 통해서 초기값을 지정해준다.
int main() {
    Monster array[101];  // Monster 클래스형의 객체 배열

    // 배열의 요소의 개수 length
    int length = sizeof(array) / sizeof(Monster);

    for (int i = 0; i < length; i++) {
        array[i].Init(i, i, i, i);
    }

    for (int i = 0; i < length; i++) {
        array[i].ShowInfo();
    }

    for (int i = 0; i < length; i++) {
        array[i].Attack();
    }

    for (int i = 0; i < length; i++) {
        array[i].Run();
    }


    return 0;
}