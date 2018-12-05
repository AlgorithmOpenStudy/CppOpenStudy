#include<iostream>
using namespace std;

class Sang {
private:
	int num;
public:
	//생성자호출(지역변수는 int한개)
	Sang(int n) : num(n)
	{
		cout << "나는 생클라스 생성자주소 입니다 : " << this << endl;
	}
	// 복사생성자호출
	Sang(const Sang& copy) : num(copy.num) {
		cout << "나는 복사 생성자 주소" << this << endl;
	}
	//소멸자 호출
	~Sang()
	{
		cout << "나는 생클라스1 소멸자주소 입니다 : " << this << endl;
	}
};
// Sang 객체 생성 return 시 임시객체 생성(공간할당해서) and 주소충돌방지를 위해 복사생성자 호출
Sang Sing(Sang s) {
	cout << "Sang의 주소: " << &s << endl;
	return s;
}
int main() {
	//객체생성
	Sang sang(10);
	//Sang 객체 이름 Sing을 sang 객체로 초기화
	Sing(sang);

	Sang song = Sing(sang);
	cout << "song의 주소 : " << &song << endl;
	system("pause");
}