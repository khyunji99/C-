#include <iostream>

using namespace std;

class Monster {
private:
    int _health;
    int _attack;
    int _defense;
    int _speed;


public:
    Monster()  // ��������� ����Ʈ���� () �ȿ� ������ ������Ÿ�� �ƹ��ų� �־ �������ָ� �ȴ�.
        : _health(0), _attack(0), _defense(0), _speed(10)
    {
        cout << "Monster �⺻������" << endl;
    }

    Monster(int health, int attack, int defense, int speed)
        : _health(health), _attack(attack), _defense(defense), _speed(speed)
    {
        cout << "Monster ������" << endl;
    }

    ~Monster() {
        cout << "Monster �Ҹ���" << endl;
    }


    // �迭�� �ʱⰪ �������ִ� �Լ�
    void Init(int health, int attack, int defense, int speed) {
        _health = health;
        _attack = attack;
        _defense = defense;
        _speed = speed;
    }


    void Attack() {
        cout << _attack << "�� ���ݷ����� ����" << endl;
    }

    void Run() {
        cout << _speed << "�� �ӵ��� �޸���" << endl;
    }

    void ShowInfo() {
        cout << "�����: " << _health << endl;
        cout << "���ݷ�: " << _attack << endl;
        cout << "����: " << _defense << endl;
        cout << "�ӵ�: " << _speed << endl;
    }

};


// ��ü �迭 : ������ �������� ��ü���� ���� �迭
// �迭�� �⺻ �����ڰ� �־�� ����� �� �ִ�.
// ��ü �迭�� �ٷ� �ʱⰪ�� �־��� �� �����Ƿ� Init�Լ���
// ���ؼ� �ʱⰪ�� �������ش�.
int main() {
    Monster array[101];  // Monster Ŭ�������� ��ü �迭

    // �迭�� ����� ���� length
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