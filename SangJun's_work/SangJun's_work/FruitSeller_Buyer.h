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
		cout << "남은 바나나 : " << Banana_Num << endl;
		cout << "판매액수 : " << sMoney << endl << endl;
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
		cout << "현재 잔액 : " << bMoney << endl;
		cout << "구입한 바나나 개수 : " << Banana_Num << endl << endl;
	}
};