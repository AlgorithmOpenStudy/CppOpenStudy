#include <iostream>
using namespace std;

class Calculator {
private:
  int addCount;
  int subCount;
  int mulCount;
  int divCount;
public:
  void Init();
  void ShowOpCount();
  double Add(double x, double y);
  double Sub(double x, double y);
  double Mul(double x, double y);
  double Div(double x, double y);
};

void Calculator::Init() {
  addCount = 0;
  subCount = 0;
  mulCount = 0;
  divCount = 0;
}
void Calculator::ShowOpCount() {
  cout << "덧셈: " << addCount << " 뺄셈: " << subCount << " 곱셈: " << mulCount << " 나눗셈: " << divCount << endl;
}
double Calculator::Add(double x, double y) {
  addCount++;
  return x + y;
}
double Calculator::Sub(double x, double y) {
  subCount++;
  return x - y;
}
double Calculator::Mul(double x, double y) {
  mulCount++;
  return x * y;
}
double Calculator::Div(double x, double y) {
  if (y == 0)
    return 0;
  divCount++;
  return x / y;
}

int main(void) {
  Calculator cal;
  cal.Init();
  cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
  cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
  cout << "2.2 - 1.5 = " << cal.Sub(2.2, 1.5) << endl;
  cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
  //cout << "5.5 * 1.6 = " << cal.Mul(5.5, 1.6) << endl;
  cal.ShowOpCount();
}