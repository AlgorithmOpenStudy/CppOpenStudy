#include <iostream>
using namespace std;

class apple {
public:
	void getapple() {
		cout << "I'm Apple" << endl;
	}
};
class banana {
public:
	void getbanana() {
		cout << "I'm banana" << endl;
	}
};

class mango {
public:
	void getmango() {
		cout << "I'm mango" << endl;
	}
};
//ĸ��ȭ ����
class Fruit {
private:
	int amount;
	apple a;
	banana b;
	mango m;
public:
	//������ ���� Ȯ��
	Fruit() {
		cout << "���� �����ھ�" << endl;
	}
	//�̴ϼȶ����� ���
	Fruit(int num) : amount(num)
	{
		// this�� Fruit��ü�ּҰ����� Ȯ��
		cout << this << endl;
		// this �ּҰ� �����ϰ� ���
		cout << this->amount << endl;
		cout << "���� �����ھ� �������̵���" << endl;
	}
	void putapple(apple &a) {
		a.getapple();
	}
	void putbanana(banana &b) {
		b.getbanana();
	}
	void putmango(mango &m) {
		m.getmango();
	}
	// ���� �� ������ �°� �״�� �����ϰ� ������
	void sunseoput() {
		cout << "-------------------------------------------------" << endl;
		cout << "������� ĸ��ȭ�Ȱ� ����ϰ�;�" << endl;
		a.getapple();
		b.getbanana();
		m.getmango();
	}
	// �Ҹ��� ���� Ȯ��
	~Fruit() {

		cout << "���� �Ҹ��ھ�" << endl;
	}
};

class codlove {
private:
	apple &a;
	banana &b;
	mango &m;
public:

};
int main() {
	int n = 10;
	apple a;
	banana b;
	mango m;
	Fruit fruit; //������ 1����
	Fruit f(10); // ������ 2����
	fruit.putapple(a);
	fruit.putbanana(b);
	fruit.putmango(m);

	fruit.sunseoput();

	//delete Fruit();
	system("pause");

}