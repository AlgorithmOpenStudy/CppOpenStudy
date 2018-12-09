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
	cout << Sosimple::simObjCnt << "¹øÂ° Sosimple °´Ã¼" << endl;
	Sosimple sim1;
	Sosimple sim2;

	cout << Sosimple::simObjCnt << "¹øÂ° Sosimple °´Ã¼" << endl;
	cout << sim1.simObjCnt << "¹øÂ° ½î½ÉÇÃ °´Ã¼" << endl;
	cout << sim2.simObjCnt << "¹øÂ° ½î½ÇÇÃ °´Ã¼" << endl;

	system("pause");
	return 0;
}