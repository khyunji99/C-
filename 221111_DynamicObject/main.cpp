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
        cout << "Student 기본 생성자" << endl;
    }

    Student(string name, int age, int grade, int classNum)
        : _name(name), _age(age), _grade(grade), _classNum(classNum)
    {
        cout << "Student 인자를 받는 생성자" << endl;
    }

    void Init(string name, int age, int grade, int classNum) {
        _name = name;
        _age = age;
        _grade = grade;
        _classNum = classNum;
    }

    ~Student() {
        cout << "Student 소멸자" << endl;
    }

    void ShowInfo() {
        cout << "이름: " << _name << endl;
        cout << "나이: " << _age << endl;
        cout << "학년: " << _grade << endl;
        cout << "반: " << _classNum << endl;
    }
};


int main() {
    Student st;  // Student 타입의 변수 st 생성

    Student* pa = new Student;

    pa->Init("monster", 15, 2, 8);

    pa->ShowInfo();

    delete pa;

    pa = new Student("monster2", 18, 2, 10);

    pa->ShowInfo();

    delete pa;



    return 0;
}