#include <iostream>
using namespace std;
class Sexy {
public :
	void character() const { cout << "¾Ï½î½Ù½Ã" << endl; }
};
class Handsome {
public :
	void character() const { cout << "¾Ï½îÇÚ¼¶" << endl; }
};

class sangjun {
public :
	void characterSexy(const Sexy &cap)const { cap.character(); }
	void characterHansome(const Handsome &cap)const { cap.character(); }
};