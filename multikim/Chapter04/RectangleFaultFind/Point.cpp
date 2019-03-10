#include <iostream>
#include "Point.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos)
{
  if (xpos < 0 || xpos > 100 || ypos < 0 || ypos > 100) // ���� ����(�ڵ� ����)
  {
    cout << "��� ������ �� ����" << endl;
    return false;
  }

  x = xpos;
  y = ypos;
  return true;
}

int Point::GetX() const { return x; } // ������ �Լ�
int Point::GetY() const { return y; }

bool Point::SetX(int xpos) // ������ �Լ�
{
  if (0 > xpos || xpos > 100)
  {
    cout << "��� ������ �� ����" << endl;
    return false;
  }

  x = xpos;
  return true;
}
bool Point::SetY(int ypos)
{
  if (0 > ypos || ypos > 100)
  {
    cout << "��� ������ �� ����" << endl;
    return false;
  }

  y = ypos;
  return true;
}