#include<iostream>
using namespace std;

class Point
{
public:
  int x;   // x좌표의 범위는 0이상 100이하.
  int y;   // y좌표의 범위는 0이상 100이하.
};

class Rectangle
{
public:
  Point upLeft; // 클래스의 멤버변수로 객체를 두었다.
  Point lowRight;

public:
  void ShowRecInfo()
  {
    cout << "좌 상단: " << '[' << upLeft.x << ", ";
    cout << upLeft.y << ']' << endl;
    cout << "우 하단: " << '[' << lowRight.x << ", ";
    cout << lowRight.y << ']' << endl << endl;
  }
};

int main(void)
{
  Point pos1 = { -2, 4 }; // 멤버변수가 public이라 접근 가능.
  // pos1은 좌표계를 벗어났다.
  Point pos2 = { 5, 9 };
  Rectangle rec = { pos2, pos1 };
  // 사각형이 좌 상단보다 우 하단이 더 큰 비 정상적인 좌표를 가지고 있다.
  rec.ShowRecInfo();
  return 0;
}
