#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string _name;
    int _wheelCount;  // ���� ����
    float _speed;     // �ӵ�
    bool _isCargo;    // ��ĭ ����

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
        cout << _speed << "�� �ӵ� ����" << endl;
    }

    void Break() {
        _speed -= 0.6f;
        cout << _speed << "�� �ӵ� ����" << endl;
    }

    void ShowStatus() {
        cout << _name << "���� ���� ���� �ӵ�" << _speed << "�̰�, "
            << "������ ������ " << _wheelCount << ", ��ĭ��";

        if (_isCargo) {
            cout << "����" << endl;
        }
        else {
            cout << "����" << endl;
        }
    }
};


int main() {
    int count = 0;
    char buff[100];

    cout << "�ʿ��� ���� ������ �Է��ϼ���: ";
    // cin ������ : ���� �Է¹޴� ������
    cin >> count;

    Car* parray = new Car[count];   // ���� ��ü�迭

    for (int i = 0; i < count; i++) {
        sprintf(buff, "monster_%d", i);
        parray[i].Init(buff, i, i, i);
    }

    // �ڵ����� �۵�
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


    delete[] parray;   // �����迭�� ��ȯó���Ҷ��� delete[] �����ڸ� ����Ѵ�.


    return 0;
}