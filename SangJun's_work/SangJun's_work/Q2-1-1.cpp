#include<iostream>
using namespace std;

void plusvalue(int &a) {
	a++;
}
void changevalue(int &a) {
	a *= -1;
}

int main(void){
	int value = 20;
	plusvalue(value);

	cout << "value : " << value << endl;

	changevalue(value);
	cout << "value : " << value << endl;
	return 0;
	}
