#pragma warning(disable : 4996)
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

char * MakeStrAdr(int len) {
	char *str = (char*)malloc(sizeof(char)*len);
	return str;
}
int  main(void) {
	char * str = MakeStrAdr(20);
	strcpy(str, "난 행복해~");
	cout << str << endl;
	free(str);
	system("pause");
	return 0;
}

