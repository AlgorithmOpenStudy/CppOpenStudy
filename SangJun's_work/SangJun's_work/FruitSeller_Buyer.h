#include <iostream>
using namespace std;

class BananaSeller {
private:
	int Banana_Price;
	int Banana_Num;
	int sMoney;

public:
	BananaSeller(int price, int num, int money) {
		Banana_Price = price;
		Banana_Num = num;
		sMoney = money;
	}
	int SalesBanana(int money) {
		int num = money / Banana_Price;
		Banana_Num -= num;
		sMoney -= money;
		return num;
	}
	void ShowSalesRes() const {
		cout << "���� �ٳ��� : " << Banana_Num << endl;
		cout << "�Ǹž׼� : " << sMoney << endl << endl;
	}
};
class BananaBuyer {
private :
	int bMoney;
	int Banana_Num;
public:
	BananaBuyer(int money) {
		bMoney = money;
		Banana_Num = 0;
	}
	void BuyBanana( BananaSeller&seller, int money) {
		Banana_Num += seller.SalesBanana(money);
		bMoney -= money;
	}
	void ShowBuyRes() const {
		cout << "���� �ܾ� : " << bMoney << endl;
		cout << "������ �ٳ��� ���� : " << Banana_Num << endl << endl;
	}
};