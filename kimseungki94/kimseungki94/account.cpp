#include<iostream>
using namespace std;
typedef struct {
	char accID[20];
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
	cout << endl << "�̸� : ";
	cin >> accArr[accpeonum].cusName;
	cout << endl << "�Աݾ� : ";
	cin >> accArr[accpeonum].balance;

	accpeonum += 1;
}
void showAccount() {
	accpeonum = 0;
	cout << endl <<"����ID : ";
	cout << accArr[accpeonum].accID;
	cout << endl << "�̸� : ";
	cout << accArr[accpeonum].cusName;
	cout << endl << "�Աݾ� : ";
	cout << accArr[accpeonum].balance;
}
void PlusMoney() {
	char choose[20];
	int plusMon;
	cout << endl;
	cout << endl;
	cout << "����� accID�� �Է��ϼ��� : ";
	cin >> choose;
	cout << "�󸶸� �����ҷ���?";
	cin >> plusMon;
	accArr[0].balance += plusMon;
	cout << "���� �� : " << accArr[0].balance << endl;
	}
	

void MinusMoney() {
	char choose[20];
	int minMon;
	cout << endl;
	cout << endl;
	cout << "����� accID�� �Է��ϼ��� : ";
	cin >> choose;
	cout << "�󸶸� ��������?";
	cin >> minMon;
	accArr[0].balance -= minMon;
	cout << "���� �� : " << accArr[0].balance << endl;
}

void main() {

	mainmenu();
	AddAccount();
	showAccount();
	PlusMoney();
	MinusMoney();
	showAccount();
	system("pause");
}