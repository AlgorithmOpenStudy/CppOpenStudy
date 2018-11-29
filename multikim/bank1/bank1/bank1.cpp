// bank1.cpp : 51페이지 예제
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

#define LISTSIZE 3

typedef struct {
  char accountNumber[20];
  int balance;
  char accountHolderName[20];
} Account;

Account csList[LISTSIZE];

void InitList();
void PrintMenu();
int MakeAccount();
int Deposit();
int Withdraw();
int ShowAllAccountHolder();

int main() {
  InitList();
  int choice = 0;
  while (1) {
    PrintMenu();
    cin >> choice;
    switch (choice) {
    case 1: if (MakeAccount() == -1) {
      cout << "계좌 생성 오류!\n" << endl;
    }
            break;
    case 2: if (Deposit() == -1) {
      cout << "입금 오류!\n" << endl;
    }
            break;
    case 3: if (Withdraw() == -1) {
      cout << "출금 오류!\n" << endl;
    }
            break;
    case 4: ShowAllAccountHolder();
      break;
    case 5: return 0;
    default: cout << "\n선택 오류입니다!\n" << endl;
    }
  }
}

void InitList() {
  for (int i = 0; i < LISTSIZE; i++) {
    strcpy(csList[i].accountHolderName, "");
    strcpy(csList[i].accountNumber, "");
    csList[i].balance = 0;
  }
}

void PrintMenu() {
  cout << "---------Menu---------\n";
  cout << "1. 계좌개설\n";
  cout << "2. 입금\n";
  cout << "3. 출금\n";
  cout << "4. 계좌정보 전체 출력\n";
  cout << "5. 프로그램 종료" << endl;
  cout << "선택: ";
}

int MakeAccount() {
  int i;
  for (i = 0; strcmp(csList[i].accountNumber, "") != 0 && i < LISTSIZE; i++);
  if (i >= LISTSIZE) {
    cout << "\n리스트 공간 부족!" << endl;
    return -1;
  }
  cout << "\n[계좌개설]\n";
  cout << "성명: ";
  cin >> csList[i].accountHolderName;
  cout << "계좌번호: ";
  cin >> csList[i].accountNumber;
  cout << "예금하실 금액: ";
  cin >> csList[i].balance;
  cout << "계좌가 개설되었습니다.\n" << endl;
  return 0;
}

int Deposit() {
  int i, price;
  char accNum[20];
  cout << "\n[입금]\n";
  cout << "계좌번호: ";
  cin >> accNum;
  for (i = 0; strcmp(csList[i].accountNumber, accNum) != 0 && i < LISTSIZE; i++);
  if (i == LISTSIZE) {
    cout << "존재하지 않는 계좌입니다!" << endl;
    return -1;
  }
  cout << "예금주: " << csList[i].accountHolderName << endl;
  cout << "맡기실 금액: ";
  cin >> price;
  csList[i].balance += price;
  cout << "-------처리결과-------\n";
  cout << "계좌번호: " << csList[i].accountNumber << endl;
  cout << "예금주: " << csList[i].accountHolderName << endl;
  cout << "잔액: " << csList[i].balance << "\n" << endl;
  return 0;
}

int Withdraw() {
  int i, price;
  char accNum[20];
  cout << "\n[출금]\n";
  cout << "계좌번호: ";
  cin >> accNum;
  for (i = 0; strcmp(csList[i].accountNumber, accNum) != 0 && i < LISTSIZE; i++);
  if (i == LISTSIZE) {
    cout << "존재하지 않는 계좌입니다!" << endl;
    return -1;
  }
  cout << "예금주: " << csList[i].accountHolderName << endl;
  cout << "찾으실 금액: ";
  cin >> price;
  if (csList[i].balance - price < 0) {
    cout << "잔액이 부족합니다." << endl;
  }
  else {
    csList[i].balance -= price;
  }
  cout << "-------처리결과-------\n";
  cout << "계좌번호: " << csList[i].accountNumber << endl;
  cout << "예금주: " << csList[i].accountHolderName << endl;
  cout << "잔액: " << csList[i].balance << "\n" << endl;
  return 0;
}

int ShowAllAccountHolder() {
  int cnt = 0;
  cout << "\n[계좌정보 전체 출력]\n";
  for (int i = 0; strcmp(csList[i].accountNumber, "") != 0 && i < LISTSIZE; i++) {
    cout << "계좌번호: " << csList[i].accountNumber << endl;
    cout << "예금주: " << csList[i].accountHolderName << endl;
    cout << "잔액: " << csList[i].balance << "\n" << endl;
    cnt++;
  }
  if (cnt == 0) {
    cout << "입력된 데이터가 없습니다!\n" << endl;
  }
  else {
    cout << cnt << "개의 데이터가 조회되었습니다.\n" << endl;
  }
  return 0;
}