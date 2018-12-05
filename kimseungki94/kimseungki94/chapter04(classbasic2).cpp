#include <iostream>
using namespace std;

class apple {
public:
	void getapple() {
		cout << "I'm Apple" << endl;
	}
};
class banana {
public:
	void getbanana() {
		cout << "I'm banana" << endl;
	}
};

class mango {
public:
	void getmango() {
		cout << "I'm mango" << endl;
	}
};
//캡슐화 실행
class Fruit {
private:
	int amount;
	apple a;
	banana b;
	mango m;
public:
	//생성자 실행 확인
	Fruit() {
		cout << "내가 생성자야" << endl;
	}
	// 소멸자 실행 확인
	~Fruit() {
		cout << "내가 소멸자야" << endl;
	}
	//이니셜라이져 사용
	Fruit(int num) : amount(num)
	{
		// this가 Fruit객체주소값임을 확인
		cout << this << endl;
		// this 주소값 유용하게 사용
		cout << this->amount << endl;
		cout << "나도 생성자야 오버라이딩된" << endl;
	}
	void putapple(apple &a) {
		a.getapple();
	}
	void putbanana(banana &b) {
		b.getbanana();
	}
	void putmango(mango &m) {
		m.getmango();
	}
	// 내가 이 순서에 맞게 그대로 실행하고 싶을때
	void sunseoput() {
		cout << "-------------------------------------------------" << endl;
		cout << "순서대로 캡슐화된걸 출력하고싶어" << endl;
		a.getapple();
		b.getbanana();
		m.getmango();
	}
};

class codlove {
private:
	apple &a;
	banana &b;
	mango &m;
public:

};
int main() {
	int n = 10;
	apple a;
	banana b;
	mango m;
	// 소멸자는 fruit가 할당하는게 있을때 실행되는거라... 동적할당이나 참조를 해야됨!
	Fruit *fruit = new Fruit; //생성자 1실행
	Fruit f(10); // 생성자 2실행
	fruit->putapple(a);
	fruit->putbanana(b);
	fruit->putmango(m);

	fruit->sunseoput();
	delete fruit;
	//delete Fruit();
	system("pause");

}