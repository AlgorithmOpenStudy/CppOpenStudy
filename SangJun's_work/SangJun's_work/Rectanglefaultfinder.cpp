#include <iostream>
#include "Point.h"
#include"Rectangle.h"
using namespace std;

int main() {
	Point pos1;
	if (!pos1.InitMembers(-3, 5))
		cout << "초기화 오류!" << endl;
	if (!pos1.InitMembers(3, 5))
		cout << "초기화 오류!" << endl;
	Point pos2;
	if (!pos2.InitMembers(5, 10))
		cout << "초기화 오류!" << endl;

	Rectangle rec;
	if (!rec.InitMembers(pos2, pos1))
		cout << "직사각형 초기화 오류!" << endl;
	if (!rec.InitMembers(pos1, pos2))
		cout << "직사각형 초기화 오류!" << endl;

	rec.ShowRecInfo();
	system("pause");
	return 0;
}