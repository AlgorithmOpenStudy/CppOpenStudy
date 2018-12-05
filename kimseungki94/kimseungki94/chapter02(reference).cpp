#include<iostream>
using namespace std;

int main() {

	int *a = new int; //동적할당
	*a = 4;
	cout << &a << endl; // 주소값에주소값? ㅋㅋㅋㅋㅋ(오류나도 할말없다 이건...ㅋ)
	cout << *a << endl; // 변수값
	cout << a << endl; // 주소값

	int &c = *a; //c에 a값 참조하기(즉 b도 동일하게 됨)
	c = 20;
	cout << *a << endl; //c의 값이 재대로 참조되엇는지 확인
	cout << &c << endl; // 주소가 동일한지 확인
	delete a;
	system("pause");
}