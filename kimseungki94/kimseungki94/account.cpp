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
	cout << "1. 개좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}
void AddAccount() {
	cout << "계좌ID : ";
	cin >> accArr[accpeonum].accID;
	cout << endl << "이름 : ";
	cin >> accArr[accpeonum].cusName;
	cout << endl << "입금액 : ";
	cin >> accArr[accpeonum].balance;

	accpeonum += 1;
}
void showAccount() {
	accpeonum = 0;
	cout << endl <<"계좌ID : ";
	cout << accArr[accpeonum].accID;
	cout << endl << "이름 : ";
	cout << accArr[accpeonum].cusName;
	cout << endl << "입금액 : ";
	cout << accArr[accpeonum].balance;
}
void PlusMoney() {
	char choose[20];
	int plusMon;
	cout << endl;
	cout << endl;
	cout << "당신의 accID를 입력하세요 : ";
	cin >> choose;
	cout << "얼마를 저축할래요?";
	cin >> plusMon;
	accArr[0].balance += plusMon;
	cout << "현재 돈 : " << accArr[0].balance << endl;
	}
	

void MinusMoney() {
	char choose[20];
	int minMon;
	cout << endl;
	cout << endl;
	cout << "당신의 accID를 입력하세요 : ";
	cin >> choose;
	cout << "얼마를 뽑을래요?";
	cin >> minMon;
	accArr[0].balance -= minMon;
	cout << "현재 돈 : " << accArr[0].balance << endl;
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