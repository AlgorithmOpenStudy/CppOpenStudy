#include<iostream>
#include<cstring>
#include "ObjArr.h"
#pragma warning (disable:4996)
using namespace std;

int main() {
	Person *parr[3];
	char namestr[50];
	int age;

	for (int i = 0; i < 3; i++) {
		cout << "이름 : ";
		cin >> namestr;
		cout << "나이 : ";
		cin >> age;
		parr[i] = new Person(namestr, age);
	}

	parr[0]->ShowPersonInfo();
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();
	delete parr[0];
	delete parr[1];
	delete parr[2];

	system("pause");
	return 0;
}