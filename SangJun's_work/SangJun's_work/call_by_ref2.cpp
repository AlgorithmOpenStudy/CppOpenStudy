#include<iostream>
using namespace std;

void swapbyref2(int &ref1, int &ref2) {
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}//call_by_ref2

int main(void) {
	int val1 = 5;
	int val2 = 10;
	swapbyref2(val1, val2);
	cout << "val1 : " << val1 << endl;
	cout << "val2 : " << val2 << endl;
	return 0;
}