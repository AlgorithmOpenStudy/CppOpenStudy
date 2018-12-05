#include<iostream>
#include<cstring>
#pragma warning (disable : 4996)
using namespace std;

namespace COMPANY {
	enum {
		CLERK,
		SENIOR,
		ASSIST,
		MANAGER
	};
	void ShowPositionInfo(int pos) {
		switch (pos)
		{
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
		}
	}
}
class NameCard
{
private:
	char *name;
	char *company_name;
	char *phone;
	int position;
public:
	NameCard(const char *name1, const char *company1, const char *phone1, int pos) : position(pos) {
		name = new char[strlen(name1) + 1]; //동적할당은 몰라서 답안 참고
		company_name = new char[strlen(company1) + 1];
		phone = new char[strlen(phone1) + 1];
		strcpy(name, name1);

		strcpy(company_name, company1);
		strcpy(phone, phone1);

	}
	void ShowNameCardInfo() {
		cout << "이름 :" << name << endl;
		cout << "회사이름 :" << company_name << endl;
		cout << "전화번호 :" << phone << endl;
		cout << "직급 : "; COMPANY::ShowPositionInfo(position);
		cout << endl;
	}
	~NameCard(){
		delete[]name;
	    delete[]company_name;
		delete[]phone;
	}

};

int main() {
	NameCard manCLERK("뭉치", "우리집", "010-8855", COMPANY::CLERK);
	NameCard manSENIOR("하트", "우리집", "010-8546", COMPANY::SENIOR);
	NameCard manMANAGER("나", "우리집", "010-7789", COMPANY::MANAGER);
	manCLERK.ShowNameCardInfo();
	manMANAGER.ShowNameCardInfo();
	manMANAGER.ShowNameCardInfo();
	system("pause");
	return 0;
}