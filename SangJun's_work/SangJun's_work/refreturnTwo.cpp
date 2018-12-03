#include <iostream>
using namespace std;

int& refretfuncOne(int &ref) {
	ref++;
	return ref;
}

int main(void) {
	int num1 = 15;
	int num2 = refretfuncOne(num1);

	num1+=5;
	num2+=100;

	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	system("pause");
	return 0;
}