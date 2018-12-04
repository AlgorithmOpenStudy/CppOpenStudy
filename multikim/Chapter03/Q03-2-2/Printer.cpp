#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Printer {
private:
  char buffer[100];
public:
  void SetString(const char* input) {
    strcpy(buffer, input);
  }
  void ShowString() {
    cout << buffer << endl;
  }
};

int main(void) {
  Printer pnt;

  pnt.SetString("Hello world!");
  pnt.ShowString();

  pnt.SetString("I love C++");
  pnt.ShowString();

  return 0;
}