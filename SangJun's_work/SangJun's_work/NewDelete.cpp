#pragma warning (disable : 4996)
#include <iostream>
#include <stdio.h>
using namespace std;

char *MakeStrAdr(int len) {
	char *str = new char[len];
	return str;
}

int main(void) {
	char *str = MakeStrAdr(50);
	strcpy(str, "�� ���ϵ��� ������̴�");
	cout << str << endl;
	delete []str;
	system("pause");
	return 0;
}