#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

class MyFriendInfo {
private:
	char *name;
	int age;

public : 
	MyFriendInfo(const char *fname, int fage) : age(fage) {
		name = new char[strlen(fname) + 1];
		strcpy(name, fname);
	}
	void showMyFriendInfo(){
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
	~MyFriendInfo() {
		delete[]name;
	}
};

class MyFriendDetailInfo : public MyFriendInfo {
private:
	char *addr;
	char *phone;

public : 
	MyFriendDetailInfo(char *faddr, char *fphone, const char *fname, int fage) : MyFriendInfo(fname, fage) {
		addr = new char[strlen(addr) + 1];
		phone = new char[strlen(phone) + 1];
		strcpy(addr, faddr);
		strcpy(phone, fphone);

	}
	void ShowMyFriendDetailInfo() {
		showMyFriendInfo();
		cout << "�ּ� : " << addr << endl;
		cout << "��ȭ��ȣ : " << phone << endl;
	}
	~MyFriendDetailInfo() {
		delete[] addr;
		delete[] phone;
	}

	int main() {
		MyFriendDetailInfo f1 ("��°�", "25", "��⵵ ����", "010-9786-5648");
		MyFriendDetailInfo f2 ("�趯��", "25", "��⵵ �ǿ�", "010-4569-7891");
		ShowMyFriendDetailInfo();
		ShowMyFriendDetailInfo();
		system("pause");
		return 0;

	}
};