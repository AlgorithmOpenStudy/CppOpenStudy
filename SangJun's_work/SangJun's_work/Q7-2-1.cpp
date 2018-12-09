#include <iostream>
using namespace std;

class Rectangle {
private:
	int x; // 가로
	int y; // 세로
public:
	Rectangle(int x1, int y1) : x(x1), y(y1) {}

	void ShowAreaInfo() {
		cout << "면적 : " << x * y << endl;
	}
};

	class Square : public Rectangle
	{
	public : 
		Square(int a) : Rectangle(a, a){

		}
	};
	int main() {
		Rectangle rec(4, 6);
		rec.ShowAreaInfo();

		Square sqr(5);
		sqr.ShowAreaInfo();

		system("pause");
		return 0;
	}