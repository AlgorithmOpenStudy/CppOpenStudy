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
		cout << "�̸� : " << endl;
		cout << "���� : " << endl;
	}
	~Person() {
		delete[]name;
		cout << "�Ҹ��� ȣ��!" << endl;
	}
};

int main() {
	Person man1("�����", 26);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	system("pause");
	return 0;
}