#include<iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	cout << "���Է� : ";
	cin >> a;
	cout << "���Է� : ";
	cin >> b;
	cout << "���Է� : ";
	cin >> c;
	cout << "���Է� : ";
	cin >> d;
	cout << "���Է� : ";
	cin >> e;
	cout << a + b + c + d + e << endl;

	char pho[20];

	cin.getline(pho, 20);

	/*pho�� �Է��� �ޱ� ���� �ٸ� ���� �Է� ���� ���� ������ ����(\n)�� ���ۿ� �����־
	ù ��° �ٶ������� �� �� �Ѱܹ����� �� ���� �ٶ������� �Է��� �ٽ� �޴� ������ �� ����.*/
	char phone[20];
	cout << "�����Է� : ";
	cin.getline(phone, 20);
	char name[10];
	cout << "�̸��Է� : ";
	cin.getline(name, 10);
	cout << phone << endl << name << endl;
	system("pause");
}