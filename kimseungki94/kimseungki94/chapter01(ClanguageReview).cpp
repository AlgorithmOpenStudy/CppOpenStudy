#include<iostream>
using namespace std;

typedef struct {
	int accID;
	int balance;
	char cusName[20];
} Account;

Account accArr[100];
int accpeonum = 0;

void mainmenu() {
	cout << "------------menu------------------" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �Ա�" << endl;
	cout << "3. ���" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;

}
void AddAccount() {
	cout << "����ID : ";
	cin >> accArr[accpeonum].accID;
	cin.clear();
	cin.ignore(100, '\n');


	cout << endl << "�̸� : ";
	cin >> accArr[accpeonum].cusName;
	cout << endl << "�Աݾ� : ";
	cin >> accArr[accpeonum].balance;

	accpeonum += 1;
}
void showAccount() {

	for (int i = 0; i < 100; i++) {
		if (accArr[i].accID != NULL) {
			cout << endl << "����ID : ";
			cout << accArr[i].accID;
			cout << endl << "�̸� : ";
			cout << accArr[i].cusName;
			cout << endl << "�Աݾ� : ";
			cout << accArr[i].balance << endl;
		}

	}

}
void PlusMoney() {
	int choose;
	int plusMon;
	cout << endl;
	cout << endl;
	cout << "����� accID�� �Է��ϼ��� : ";
	cin >> choose;
	cin.clear();
	cin.ignore(100, '\n');
	for (int i = 0; i < 100; i++) {
		if (accArr[i].accID == choose) {
			cout << "�󸶸� �����ҷ���?";
			cin >> plusMon;
			accArr[i].balance += plusMon;
			cout << "���� �� : " << accArr[i].balance << endl;
		}
	}

}

void MinusMoney() {

	int choose;
	int minMon;
	cout << endl;
	cout << endl;
	cout << "����� accID�� �Է��ϼ��� : ";
	cin >> choose;
	cin.clear();
	cin.ignore(100, '\n');
	for (int i = 0; i < 100; i++) {
		if (accArr[i].accID == choose) {
			cout << "�󸶸� ��������?";
			cin >> minMon;
			accArr[i].balance -= minMon;
			cout << "���� �� : " << accArr[i].balance << endl;
		}
	}
}

int main(void) {
	while (1)
	{
		int choose;
		mainmenu();
		cout << "���� : ";
		cin >> choose;
		switch (choose)
		{
		case 1:
			AddAccount();
			break;
		case 2:
			PlusMoney();
			break;
		case 3:
			MinusMoney();
			break;
		case 4:
			showAccount();
			break;
		case 5:
			return 0;
		default:
			break;
		}

	}
	system("pause");
	return 0;

}