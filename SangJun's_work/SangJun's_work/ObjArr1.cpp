#include<iostream>
#include<cstring>
#include"ObjArr.h"
using namespace std;

int main() {
	Person parr[3];
	char namestr[100];
	char * strptr;
	int age;
	int len;

	for (int i = 0; i < 3; i++) {
		cout << "이름 : ";
		cin >> namestr;
		cout << "나이 : ";
		cin >> age;
		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);
		parr[i].SetPersonInfo(strptr, age);
	}

	parr[0].ShowPersonInfo();
	parr[1].ShowPersonInfo();
	parr[2].ShowPersonInfo();

	system("pause");
	return 0;
}