#include <iostream>
#include <string>

using namespace std;

// ��󿡼� ���� �ʿ��� ������ ���ؼ� �ܼ�ȭ��Ű�� ��
// �߻�ȭ ��� �Ѵ�.


// class Ŭ������ {
// �ܼ�ȭ�� �����͸� ����;
// };
// ĸ��ȭ(Capsulazation) -> DataType
// Son �̶�� Ŭ������ ����ŸŸ���� �������.
// Son ����ŸŸ���� ������ ������ ���� �� �ִ�.

class Son {
public:
	string jumin; // �������
	string name;
	int age;
	string address;
};


int main() {
	// Ŭ������ ������Ÿ������ ������� ���� = ��ü(object)
	Son sonh;
	sonh.jumin = "9610301068111";
	sonh.name = "�����";
	sonh.age = 31;
	sonh.address = "����";


	// ����ϱ�
	cout << "�ֹι�ȣ: " << sonh.jumin << endl;
	cout << "�̸�: " << sonh.name << endl;
	cout << "����: " << sonh.age << endl;
	cout << "�ּ�: " << sonh.address << endl;


	return 0;
}
// ��ü���� : ��ü���� ���α׷� �ȿ��� ��ȣ�ۿ��ϴ� ��
// �ν��Ͻ�(instance) : ��ü�� �޸𸮿� ����Ǿ� �����ϴ� ��
// ���ü(Object) : ����� �� �ִ� �����̸鼭 ������ȭ �� �� �ִ°�
// ��ü���� ���α׷���
// Object(���ü) -> �߻�ȭ -> object(��ü)-> instance ->ĸ��ȭ