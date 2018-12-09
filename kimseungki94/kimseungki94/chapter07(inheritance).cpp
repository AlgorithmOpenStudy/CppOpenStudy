#include<iostream>
using namespace std;
static int number;
static int sonnum;
// 자식 객체
class Son {
private:
	int money;
public:
	// 맴버변수 초기화
	Son(int mon) : money(mon) {

	}
	// 정보 호출
	void showmoney() {
		cout << "show 아들" << sonnum << "    money : " << money << endl;

		sonnum += 1;
	}
};
// 자식 상속
class Parent : public Son
{
private:
	Son* sonlist[50];	// 나중에 구현예정
	int sonlistnumber;
public:
	// 생성자생성과 동시에 상속한 son에 변수 초기화
	Parent(int num) : Son(num) {

	}
	void Addson(Son* son) {
		sonlist[sonlistnumber++] = son;
		cout << "자식 주소 << " << this << endl;
	}
	void showson() {
		showmoney();
	}
};


int main() {
	Parent parent(10);

	//부모가 자식함수 호출
	parent.showson();
	system("pause");
}