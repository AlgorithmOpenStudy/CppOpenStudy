#include<iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	cout << "수입력 : ";
	cin >> a;
	cout << "수입력 : ";
	cin >> b;
	cout << "수입력 : ";
	cin >> c;
	cout << "수입력 : ";
	cin >> d;
	cout << "수입력 : ";
	cin >> e;
	cout << a + b + c + d + e << endl;

	char pho[20];

	cin.getline(pho, 20);

	/*pho에 입력을 받기 전에 다른 값을 입력 받을 때에 누르는 엔터(\n)가 버퍼에 남아있어서
	첫 번째 겟라인으로 한 번 넘겨버리고 그 다음 겟라인으로 입력을 다시 받는 원리인 것 같다.*/
	char phone[20];
	cout << "폰번입력 : ";
	cin.getline(phone, 20);
	char name[10];
	cout << "이름입력 : ";
	cin.getline(name, 10);
	cout << phone << endl << name << endl;
	system("pause");
}