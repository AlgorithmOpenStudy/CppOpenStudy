#include<iostream>
#include<cstring>
#pragma warning (disable:4996)
using namespace std;

class Person {
private:
	char *name;
	int age;
public:
	Person(const char *myName, int myAge) {
		int len = strlen(myName) + 1;
		this->name = new char[len];

		strcpy(name, myName);
		this->age = myAge;
	}
	void ShowPersonInfo(){
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
	~Person() {
		
		cout << "소멸자 호출!" << endl;
	}
};

int main() {
	
	Person *man1 = new Person("양상준", 26);
//	Person man2 = man1;
	man1->ShowPersonInfo();
	//man2.ShowPersonInfo();
	delete man1;
	system("pause");
	return 0;
}