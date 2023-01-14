#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string _name;
    int _wheelCount;  // 바퀴 갯수
    float _speed;     // 속도
    bool _isCargo;    // 짐칸 유무

public:

    Car()
        : _name(""), _wheelCount(0), _speed(0.0), _isCargo(false) {

    }

    Car(string name, int wheelCount, float speed, bool isCargo)
        : _name(name), _wheelCount(wheelCount), _speed(speed), _isCargo(isCargo) {

    }


    void SetName(string value) {
        _name = value;
    }

    void Init(string name, int wheelCount, float speed, bool isCargo) {
        _name = name;
        _wheelCount = wheelCount;
        _speed = speed;
        _isCargo = isCargo;
    }

    void Accel() {
        _speed += 0.5f;
        cout << _speed << "의 속도 증가" << endl;
    }

    void Break() {
        _speed -= 0.6f;
        cout << _speed << "의 속도 감소" << endl;
    }

    void ShowStatus() {
        cout << _name << "님의 차의 현재 속도" << _speed << "이고, "
            << "바퀴의 갯수는 " << _wheelCount << ", 짐칸은";

        if (_isCargo) {
            cout << "있음" << endl;
        }
        else {
            cout << "없음" << endl;
        }
    }
};


int main() {
    int count = 0;
    char buff[100];

    cout << "필요한 차의 갯수를 입력하세요: ";
    // cin 연산자 : 값을 입력받는 연산자
    cin >> count;

    Car* parray = new Car[count];   // 동적 객체배열

    for (int i = 0; i < count; i++) {
        sprintf(buff, "monster_%d", i);
        parray[i].Init(buff, i, i, i);
    }

    // 자동차를 작동
    for (int i = 0; i < count; i++) {
        parray[i].Accel();
    }

    for (int i = 0; i < count; i++) {
        parray[i].ShowStatus();
    }

    for (int i = 0; i < count; i++) {
        parray[i].Break();
    }

    for (int i = 0; i < count; i++) {
        parray[i].ShowStatus();
    }


    delete[] parray;   // 동적배열을 반환처리할때는 delete[] 연산자를 사용한다.


    return 0;
}