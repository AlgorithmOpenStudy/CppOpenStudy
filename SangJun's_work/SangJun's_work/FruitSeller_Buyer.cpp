#include <iostream>
#include"FruitSeller_Buyer.h"
using namespace std;

int main() {
	BananaSeller seller(1000, 50, 0);
	BananaBuyer buyer(5000);
	buyer.BuyBanana(seller, 3000);

	cout << "판매자의 정보" << endl;
	seller.ShowSalesRes();
	cout << "구매자의 정보" << endl;
	buyer.ShowBuyRes();
	system("pause");
	return 0;
}