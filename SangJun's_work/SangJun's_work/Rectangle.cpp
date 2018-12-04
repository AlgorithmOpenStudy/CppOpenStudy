#include <iostream>
#include "Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(const Point &ul, const Point &lr){
	if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()) {
		cout << "�߸��� ��ǥ��" << endl;
		return false;
	}
	upLeft = ul;
	lowRight = lr;
	return true;
}
void Rectangle::ShowRecInfo() const {
	cout << "�� ��� :" << '[' << upLeft.GetX() << ",";
	cout << upLeft.GetY() << ']' << endl;
	cout << "�� �ϴ� :" << '[' << lowRight.GetY() << ",";
	cout << lowRight.GetX() << ']' << endl;
}