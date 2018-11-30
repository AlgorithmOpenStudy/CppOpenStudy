#include <iostream>
using namespace std;

void swapbyref(int *ptr1, int *ptr2) {
	int temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
}

int main(void) {
	int val1 = 5;
	int val2 = 10;
	swapbyref(&val1, &val2);
	cout << "val1 : " << val1 << endl;
	cout << "val2 : " << val2 << endl;
	return 0;
}