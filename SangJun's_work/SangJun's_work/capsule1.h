#include <iostream>
using namespace std;
class Sexy {
public :
	void character() const { cout << "�Ͻ�ٽ�" << endl; }
};
class Handsome {
public :
	void character() const { cout << "�Ͻ��ڼ�" << endl; }
};

class sangjun {
public :
	void characterSexy(const Sexy &cap)const { cap.character(); }
	void characterHansome(const Handsome &cap)const { cap.character(); }
};