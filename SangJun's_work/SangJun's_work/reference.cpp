#include <iostream>
using namespace std;

int main(void) {
	int num1 = 1020;
	int &num2 = num1;

	num2 = 9446;
	cout << "VAL : " << num1 << endl;
	cout << "REF : " << num2 << endl;

	cout << "VAL : " << &num1 << endl;
	cout << "REF : " << &num2 << endl;
	system("pause");
	return 0;
}