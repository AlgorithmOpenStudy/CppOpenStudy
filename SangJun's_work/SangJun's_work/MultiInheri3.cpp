#include <iostream>
using namespace std;

class Base {
public :
	Base() { cout << "Base Constructor" << endl; }
	void SimpleFunc() { cout << "Base One" << endl; }
};

class MiddleDeriverdOne : virtual public Base {
public:
	MiddleDeriverdOne() : Base() {
		cout << "MiddleDeriverdOne Constructor" << endl;
	}
	void MiddleFuncOne() {
		SimpleFunc();
		cout << "MiddleDeriverdOne" << endl;
	}
};

class MiddleDeriverdTwo : virtual public Base {
public:
	MiddleDeriverdTwo() : Base() {
		cout << "MiddleDeriverdTwo Constructor" << endl;
	}
	void MiddleFuncOne() {
		SimpleFunc();
		cout << "MiddleDeriverdTwo" << endl;
	}
};

class LastDerivered : public MiddleDeriverdOne, public MiddleDeriverdTwo
{
public:
	LastDerivered() : MiddleDeriverdOne(), MiddleDeriverdTwo() {
		cout << "LastDerivered Constructor" << endl;
	}
	void ComplexFunc() {
		MiddleDeriverdOne();
		MiddleDeriverdTwo();
		SimpleFunc();
	}
};

int main() {
	cout << "按眉积己 傈 ... " << endl;
	LastDerivered Idr;
	cout << "按眉积己 饶 ... " << endl;
	Idr.ComplexFunc();
	system("pause");
	return 0;
}