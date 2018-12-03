#include <iostream>
using namespace std;

struct Point
{
	int xpos;
	int ypos;

	void MovePos(int x, int y) {
		xpos += x;
		ypos += y;
	}
	void AddPoint(const Point &pos) {
		xpos += pos.xpos;
		ypos += pos.ypos;
	}
	void ShowPosition() {
		cout << "x,yÁÂÇ¥ ["<<xpos<<", "<<ypos<<"]" << endl;
	}
};
int main() {
	Point pos1 = { 15,8 };
	Point pos2 = { 20, 9 };

	pos1.MovePos( -8, 9 );
	pos1.ShowPosition();

	pos2.MovePos( 5, 10 );
	pos2.ShowPosition();

	system("pause");
	return 0;

}