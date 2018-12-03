#include "Q3-2-1.h"
using namespace std;

int main() {
	Calculater Cal;
	Cal.Init();
	cout << "4.6 + 2.5 = " << Cal.add(4.6, 2.5) << endl;
	cout << "3.5 / 0.5 = " << Cal.div(3.5 , 0.5) << endl;
	cout << "5.0 * 3.1 = " << Cal.multi(5.0 , 3.1) << endl;
	cout << "2.6 - 0.7 = " << Cal.sub(2.6, 0.7) << endl;
	Cal.Show();
	system("pause");
	return 0;

}