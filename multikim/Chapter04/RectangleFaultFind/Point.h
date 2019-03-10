#ifndef __POINT_H_
#define __POINT_H_

class Point
{
private: // 외부에서의 값의 변경을 막음. (은닉)
  int x;
  int y;

public:
  bool InitMembers(int xpos, int ypos);
  int GetX() const; // private한 멤버변수의 값을 참조하기 위한 함수
  int GetY() const;
  bool SetX(int xpos);
  bool SetY(int ypos);
};

#endif