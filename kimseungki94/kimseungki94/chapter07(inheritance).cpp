#include<iostream>
using namespace std;
static int number;
static int sonnum;
// �ڽ� ��ü
class Son {
private:
	int money;
public:
	// �ɹ����� �ʱ�ȭ
	Son(int mon) : money(mon) {

	}
	// ���� ȣ��
	void showmoney() {
		cout << "show �Ƶ�" << sonnum << "    money : " << money << endl;

		sonnum += 1;
	}
};
// �ڽ� ���
class Parent : public Son
{
private:
	Son* sonlist[50];	// ���߿� ��������
	int sonlistnumber;
public:
	// �����ڻ����� ���ÿ� ����� son�� ���� �ʱ�ȭ
	Parent(int num) : Son(num) {

	}
	void Addson(Son* son) {
		sonlist[sonlistnumber++] = son;
		cout << "�ڽ� �ּ� << " << this << endl;
	}
	void showson() {
		showmoney();
	}
};


int main() {
	Parent parent(10);

	//�θ� �ڽ��Լ� ȣ��
	parent.showson();
	system("pause");
}