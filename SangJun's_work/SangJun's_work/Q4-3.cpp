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
			cout << "���" << endl;
			break;
		case SENIOR:
			cout << "����" << endl;
			break;
		case ASSIST:
			cout << "�븮" << endl;
			break;
		case MANAGER:
			cout << "����" << endl;
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
		name = new char[strlen(name1) + 1]; //�����Ҵ��� ���� ��� ����
		company_name = new char[strlen(company1) + 1];
		phone = new char[strlen(phone1) + 1];
		strcpy(name, name1);

		strcpy(company_name, company1);
		strcpy(phone, phone1);

	}
	void ShowNameCardInfo() {
		cout << "�̸� :" << name << endl;
		cout << "ȸ���̸� :" << company_name << endl;
		cout << "��ȭ��ȣ :" << phone << endl;
		cout << "���� : "; COMPANY::ShowPositionInfo(position);
		cout << endl;
	}
	~NameCard(){
		delete[]name;
	    delete[]company_name;
		delete[]phone;
	}

};

int main() {
	NameCard manCLERK("��ġ", "�츮��", "010-8855", COMPANY::CLERK);
	NameCard manSENIOR("��Ʈ", "�츮��", "010-8546", COMPANY::SENIOR);
	NameCard manMANAGER("��", "�츮��", "010-7789", COMPANY::MANAGER);
	manCLERK.ShowNameCardInfo();
	manMANAGER.ShowNameCardInfo();
	manMANAGER.ShowNameCardInfo();
	system("pause");
	return 0;
}