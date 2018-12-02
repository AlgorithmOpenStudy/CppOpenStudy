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
	cout << "1. 개좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;

}
void AddAccount() {
	cout << "계좌ID : ";
	cin >> accArr[accpeonum].accID;
	cin.clear();
	cin.ignore(100, '\n');


	cout << endl << "이름 : ";
	cin >> accArr[accpeonum].cusName;
	cout << endl << "입금액 : ";
	cin >> accArr[accpeonum].balance;

	accpeonum += 1;
}
void showAccount() {

	for (int i = 0; i < 100; i++) {
		if (accArr[i].accID != NULL) {
			cout << endl << "계좌ID : ";
			cout << accArr[i].accID;
			cout << endl << "이름 : ";
			cout << accArr[i].cusName;
			cout << endl << "입금액 : ";
			cout << accArr[i].balance << endl;
		}

	}

}
void PlusMoney() {
	int choose;
	int plusMon;
	cout << endl;
	cout << endl;
	cout << "당신의 accID를 입력하세요 : ";
	cin >> choose;
	cin.clear();
	cin.ignore(100, '\n');
	for (int i = 0; i < 100; i++) {
		if (accArr[i].accID == choose) {
			cout << "얼마를 저축할래요?";
			cin >> plusMon;
			accArr[i].balance += plusMon;
			cout << "현재 돈 : " << accArr[i].balance << endl;
		}
	}

}

void MinusMoney() {

	int choose;
	int minMon;
	cout << endl;
	cout << endl;
	cout << "당신의 accID를 입력하세요 : ";
	cin >> choose;
	cin.clear();
	cin.ignore(100, '\n');
	for (int i = 0; i < 100; i++) {
		if (accArr[i].accID == choose) {
			cout << "얼마를 뽑을래요?";
			cin >> minMon;
			accArr[i].balance -= minMon;
			cout << "현재 돈 : " << accArr[i].balance << endl;
		}
	}
}

int main(void) {
	while (1)
	{
		int choose;
		mainmenu();
		cout << "선택 : ";
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