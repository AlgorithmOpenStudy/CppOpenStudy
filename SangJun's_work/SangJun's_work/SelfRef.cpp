#include <iostream>
using namespace std;

class SelfRef {
private :
	int num;
public:
	SelfRef(int n) : num(n) {
		cout << "��ü����" << endl;
	}
	SelfRef& Adder(int n) {
		num += n;
		return *this;
	}
	SelfRef ShowTwoNumber() {
		cout << num << endl;
		return *this;
	}
};

int main() {
	SelfRef obj(3);
	SelfRef &ref = obj.Adder(2);

	obj.ShowTwoNumber();
	obj.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	system("pause");
	return 0;
}