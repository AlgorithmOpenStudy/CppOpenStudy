#include <iostream>
#include "Point.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos)
{
  if (xpos < 0 || xpos > 100 || ypos < 0 || ypos > 100) // 범위 제한(코드 수정)
  {
    cout << "벗어난 범위의 값 전달" << endl;
    return false;
  }

  x = xpos;
  y = ypos;
  return true;
}

int Point::GetX() const { return x; } // 엑세스 함수
int Point::GetY() const { return y; }

bool Point::SetX(int xpos) // 엑세스 함수
{
  if (0 > xpos || xpos > 100)
  {
    cout << "벗어난 범위의 값 전달" << endl;
    return false;
  }

  x = xpos;
  return true;
}
bool Point::SetY(int ypos)
{
  if (0 > ypos || ypos > 100)
  {
    cout << "벗어난 범위의 값 전달" << endl;
    return false;
  }

  y = ypos;
  return true;
}