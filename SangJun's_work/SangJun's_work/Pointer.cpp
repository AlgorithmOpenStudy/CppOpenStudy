#include <iostream>
#include "Point.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos) {
	if (xpos < 0 || xpos > 100) {
		cout << "범위를 벗어난 값" << endl;
		return false;
	}
	else if (ypos < 0 || ypos > 100) {
		cout << "범위를 벗어난 값" << endl;
		return false;
	}
	else
	x = xpos;
	y = ypos;
	return true;
}
int Point::GetX() const {
	return x;
}
int Point::GetY() const {
	return y;
}
bool Point::SetX(int xpos) {
	if (xpos < 0 || xpos > 100) {
		cout << "범위를 벗어난 값" << endl;
		return false;
	}
	x = xpos;
	return true;
}
bool Point::SetY(int ypos) {
	if (ypos < 0 || ypos > 100) {
		cout << "범위를 벗어난 값" << endl;
		return false;
	}
	y = ypos;
	return true;
}