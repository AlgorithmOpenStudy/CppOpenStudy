#include<iostream>
#include<cstring>
#pragma warning (disable:4996)
using namespace std;

class Person {
private:
	char *name;
	int age;
public:
	Person(char *myName, int myAge) {
		int len = strlen(myName) + 1;
		name = new char[len];
		strcpy(name, myName);
		age = myAge;
	}
	void ShowPersonInfo() const{
		cout << "이름 : " << endl;
		cout << "나이 : " << endl;
	}
	~Person() {
		delete[]name;
		cout << "소멸자 호출!" << endl;
	}
};

int main() {
	Person man1("양상준", 26);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	system("pause");
	return 0;
}