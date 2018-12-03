#include <iostream>
using namespace std;

void SwapPointer(int *(&ptref1), int *(&ptref2)) {
	int *ptr = ptref1;
	ptref1 = ptref2;
	ptref2 = ptr;
}
int main(void) {
	int num1 = 40;
	int *ptr1 = &num1;

	int num2 = 50;
	int *ptr2 = &num2;

	cout << "num1 = " << *ptr1 << endl;
	cout << "num2 = " << *ptr2 << endl;

	SwapPointer(ptr1, ptr2);

	cout << "num1 = " << *ptr1 << endl;
	cout << "num2 = " << *ptr2 << endl;

	system("pause");
	return 0;
}