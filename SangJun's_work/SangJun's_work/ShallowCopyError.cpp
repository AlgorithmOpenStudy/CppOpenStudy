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
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
	~Person() {
		
		cout << "�Ҹ��� ȣ��!" << endl;
	}
};

int main() {
	
	Person *man1 = new Person("�����", 26);
//	Person man2 = man1;
	man1->ShowPersonInfo();
	//man2.ShowPersonInfo();
	delete man1;
	system("pause");
	return 0;
}