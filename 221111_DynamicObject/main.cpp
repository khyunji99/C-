#include <iostream>
#include <string>

using namespace std;


class Student {
private:
    string _name;
    int _age;
    int _grade;
    int _classNum;


public:
    Student()
        : _name(""), _age(1), _grade(1), _classNum(1)
    {
        cout << "Student �⺻ ������" << endl;
    }

    Student(string name, int age, int grade, int classNum)
        : _name(name), _age(age), _grade(grade), _classNum(classNum)
    {
        cout << "Student ���ڸ� �޴� ������" << endl;
    }

    void Init(string name, int age, int grade, int classNum) {
        _name = name;
        _age = age;
        _grade = grade;
        _classNum = classNum;
    }

    ~Student() {
        cout << "Student �Ҹ���" << endl;
    }

    void ShowInfo() {
        cout << "�̸�: " << _name << endl;
        cout << "����: " << _age << endl;
        cout << "�г�: " << _grade << endl;
        cout << "��: " << _classNum << endl;
    }
};


int main() {
    Student st;  // Student Ÿ���� ���� st ����

    Student* pa = new Student;

    pa->Init("monster", 15, 2, 8);

    pa->ShowInfo();

    delete pa;

    pa = new Student("monster2", 18, 2, 10);

    pa->ShowInfo();

    delete pa;



    return 0;
}