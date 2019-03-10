// bank1.cpp : 51������ ����
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
      cout << "���� ���� ����!\n" << endl;
    }
            break;
    case 2: if (Deposit() == -1) {
      cout << "�Ա� ����!\n" << endl;
    }
            break;
    case 3: if (Withdraw() == -1) {
      cout << "��� ����!\n" << endl;
    }
            break;
    case 4: ShowAllAccountHolder();
      break;
    case 5: return 0;
    default: cout << "\n���� �����Դϴ�!\n" << endl;
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
  cout << "1. ���°���\n";
  cout << "2. �Ա�\n";
  cout << "3. ���\n";
  cout << "4. �������� ��ü ���\n";
  cout << "5. ���α׷� ����" << endl;
  cout << "����: ";
}

int MakeAccount() {
  int i;
  for (i = 0; strcmp(csList[i].accountNumber, "") != 0 && i < LISTSIZE; i++);
  if (i >= LISTSIZE) {
    cout << "\n����Ʈ ���� ����!" << endl;
    return -1;
  }
  cout << "\n[���°���]\n";
  cout << "����: ";
  cin >> csList[i].accountHolderName;
  cout << "���¹�ȣ: ";
  cin >> csList[i].accountNumber;
  cout << "�����Ͻ� �ݾ�: ";
  cin >> csList[i].balance;
  cout << "���°� �����Ǿ����ϴ�.\n" << endl;
  return 0;
}

int Deposit() {
  int i, price;
  char accNum[20];
  cout << "\n[�Ա�]\n";
  cout << "���¹�ȣ: ";
  cin >> accNum;
  for (i = 0; strcmp(csList[i].accountNumber, accNum) != 0 && i < LISTSIZE; i++);
  if (i == LISTSIZE) {
    cout << "�������� �ʴ� �����Դϴ�!" << endl;
    return -1;
  }
  cout << "������: " << csList[i].accountHolderName << endl;
  cout << "�ñ�� �ݾ�: ";
  cin >> price;
  csList[i].balance += price;
  cout << "-------ó�����-------\n";
  cout << "���¹�ȣ: " << csList[i].accountNumber << endl;
  cout << "������: " << csList[i].accountHolderName << endl;
  cout << "�ܾ�: " << csList[i].balance << "\n" << endl;
  return 0;
}

int Withdraw() {
  int i, price;
  char accNum[20];
  cout << "\n[���]\n";
  cout << "���¹�ȣ: ";
  cin >> accNum;
  for (i = 0; strcmp(csList[i].accountNumber, accNum) != 0 && i < LISTSIZE; i++);
  if (i == LISTSIZE) {
    cout << "�������� �ʴ� �����Դϴ�!" << endl;
    return -1;
  }
  cout << "������: " << csList[i].accountHolderName << endl;
  cout << "ã���� �ݾ�: ";
  cin >> price;
  if (csList[i].balance - price < 0) {
    cout << "�ܾ��� �����մϴ�." << endl;
  }
  else {
    csList[i].balance -= price;
  }
  cout << "-------ó�����-------\n";
  cout << "���¹�ȣ: " << csList[i].accountNumber << endl;
  cout << "������: " << csList[i].accountHolderName << endl;
  cout << "�ܾ�: " << csList[i].balance << "\n" << endl;
  return 0;
}

int ShowAllAccountHolder() {
  int cnt = 0;
  cout << "\n[�������� ��ü ���]\n";
  for (int i = 0; strcmp(csList[i].accountNumber, "") != 0 && i < LISTSIZE; i++) {
    cout << "���¹�ȣ: " << csList[i].accountNumber << endl;
    cout << "������: " << csList[i].accountHolderName << endl;
    cout << "�ܾ�: " << csList[i].balance << "\n" << endl;
    cnt++;
  }
  if (cnt == 0) {
    cout << "�Էµ� �����Ͱ� �����ϴ�!\n" << endl;
  }
  else {
    cout << cnt << "���� �����Ͱ� ��ȸ�Ǿ����ϴ�.\n" << endl;
  }
  return 0;
}