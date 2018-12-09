#include<iostream>
using namespace std;
static int number;
class Lee;  //�̰� ���ؼ� 30�е��� �ظ�...��
class Sang {
private:
	int num;
public:
	Sang(int n) : num(n)
	{
		cout << "���� ��Ŭ�� �������ּ� �Դϴ� : " << this << endl;
		number++;
		cout << "1���� static ����" << number << endl;
		cout << "2���� static ����" << number + 1 << endl;
		cout << "Sang Ŭ���� number �ּ�" << &number << endl; //number���� ���� ����Ǿ��ִ���Ȯ��
	}
	void ShowLeeClass(Lee &copy);
};

class Lee {
private:
	int num;
	friend class Sang; //ģ�� Sang���� ��� ���� ����
public:
	Lee(int n) : num(n)
	{
		number++;
		cout << "3���� static ����" << number + 1 << endl; //number���� ���� ����Ǿ��ִ���Ȯ��
		cout << "Lee Ŭ���� number �ּ�" << &number << endl; //number���� ���� ����Ǿ��ִ���Ȯ��
	}


};

void Sang::ShowLeeClass(Lee &copy) {
	cout << "���� Sang������ Lee�� ģ���� ������ ���� �־�    " << copy.num << endl;
}


int main() {
	Sang sang(10);
	Lee lee(10);
	sang.ShowLeeClass(lee); //�ڽ��� �������� lee�� ���� ����
	system("pause");
}