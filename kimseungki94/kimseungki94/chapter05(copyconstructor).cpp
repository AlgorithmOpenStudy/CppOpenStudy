#include<iostream>
using namespace std;

class Sang {
private:
	int num;
public:
	//������ȣ��(���������� int�Ѱ�)
	Sang(int n) : num(n)
	{
		cout << "���� ��Ŭ�� �������ּ� �Դϴ� : " << this << endl;
	}
	// ���������ȣ��
	Sang(const Sang& copy) : num(copy.num) {
		cout << "���� ���� ������ �ּ�" << this << endl;
	}
	//�Ҹ��� ȣ��
	~Sang()
	{
		cout << "���� ��Ŭ��1 �Ҹ����ּ� �Դϴ� : " << this << endl;
	}
};
// Sang ��ü ���� return �� �ӽð�ü ����(�����Ҵ��ؼ�) and �ּ��浹������ ���� ��������� ȣ��
Sang Sing(Sang s) {
	cout << "Sang�� �ּ�: " << &s << endl;
	return s;
}
int main() {
	//��ü����
	Sang sang(10);
	//Sang ��ü �̸� Sing�� sang ��ü�� �ʱ�ȭ
	Sing(sang);

	Sang song = Sing(sang);
	cout << "song�� �ּ� : " << &song << endl;
	system("pause");
}