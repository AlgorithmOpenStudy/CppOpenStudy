#include <iostream>
using namespace std;

class Sosimple {
public:
	static int simObjCnt;
public : 
	Sosimple() {
		simObjCnt++;
	}
};

int Sosimple::simObjCnt = 0;
int main() {
	cout << Sosimple::simObjCnt << "��° Sosimple ��ü" << endl;
	Sosimple sim1;
	Sosimple sim2;

	cout << Sosimple::simObjCnt << "��° Sosimple ��ü" << endl;
	cout << sim1.simObjCnt << "��° ����� ��ü" << endl;
	cout << sim2.simObjCnt << "��° ����� ��ü" << endl;

	system("pause");
	return 0;
}