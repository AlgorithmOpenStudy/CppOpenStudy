#include<iostream>
using namespace std;

int main() {

	int *a = new int; //�����Ҵ�
	*a = 4;
	cout << &a << endl; // �ּҰ����ּҰ�? ����������(�������� �Ҹ����� �̰�...��)
	cout << *a << endl; // ������
	cout << a << endl; // �ּҰ�

	int &c = *a; //c�� a�� �����ϱ�(�� b�� �����ϰ� ��)
	c = 20;
	cout << *a << endl; //c�� ���� ���� �����Ǿ����� Ȯ��
	cout << &c << endl; // �ּҰ� �������� Ȯ��
	delete a;
	system("pause");
}