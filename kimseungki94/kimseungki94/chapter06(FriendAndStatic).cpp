#include<iostream>
using namespace std;
static int number;
class Lee;  //이거 안해서 30분동안 해맴...ㅠ
class Sang {
private:
	int num;
public:
	Sang(int n) : num(n)
	{
		cout << "나는 생클라스 생성자주소 입니다 : " << this << endl;
		number++;
		cout << "1번쨰 static 변수" << number << endl;
		cout << "2번쨰 static 변수" << number + 1 << endl;
		cout << "Sang 클래스 number 주소" << &number << endl; //number값이 재대로 저장되어있는지확인
	}
	void ShowLeeClass(Lee &copy);
};

class Lee {
private:
	int num;
	friend class Sang; //친구 Sang한테 모든 정보 제공
public:
	Lee(int n) : num(n)
	{
		number++;
		cout << "3번쨰 static 변수" << number + 1 << endl; //number값이 재대로 저장되어있는지확인
		cout << "Lee 클래스 number 주소" << &number << endl; //number값이 재대로 저장되어있는지확인
	}


};

void Sang::ShowLeeClass(Lee &copy) {
	cout << "나는 Sang이지만 Lee랑 친구라 정보를 볼수 있어    " << copy.num << endl;
}


int main() {
	Sang sang(10);
	Lee lee(10);
	sang.ShowLeeClass(lee); //자신의 권한으로 lee의 정보 제공
	system("pause");
}