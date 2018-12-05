#include <iostream>
using namespace std;
class Point
{
private:
	int xpos, ypos;

public:
	void Init(int x, int y) {
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const {
		cout << "���� �߽��� : [" << xpos << "," << ypos << "]" << endl;

	}
};


class Circle {
private:
	int rad; // ������
	Point centerP; // �߽�
public :
	void Init(int x, int y, int r) {
		rad = r;
		centerP.Init(x, y);
	}
	void ShowCircleInfo() const {
		cout << "������ : " << rad << endl;
		centerP.ShowPointInfo();
	}
};
class Ring {
private:
	Circle InCircle;
	Circle OutCircle;
public:
	void Init(int inX, int inY, int inR, int outX, int outY, int outR) {
		InCircle.Init(inX, inY, inR);
		OutCircle.Init(outX, outY, outR);
	}
	void ShowRingInfo() const {
		cout << "���� �� " << endl;
		InCircle.ShowCircleInfo();
		cout << "�ܺ� �� " << endl;
		OutCircle.ShowCircleInfo();
	}
};

int main() {
	Ring ring;
	ring.Init(2, 2, 4, 5, 6, 9);
	ring.ShowRingInfo();
	system("pause");
	return 0;
}