#include<iostream>
using namespace std;

	class A {
	public:
		void Simplefun() {
			cout << "Hello simple" << endl;
		}
	};
	class B {
	public:
		void Simplefun() {
			cout << "Hello simple2" << endl;
		}
	};
	class C : public A, protected B {
	public:
		void multifun() {
			A::Simplefun();
			B::Simplefun();
		}
	};

int main(){
	C c;
	c.multifun();
	system("pause");
}