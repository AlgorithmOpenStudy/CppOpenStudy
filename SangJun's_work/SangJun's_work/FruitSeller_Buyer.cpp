#include <iostream>
#include"FruitSeller_Buyer.h"
using namespace std;

int main() {
	BananaSeller seller(1000, 50, 0);
	BananaBuyer buyer(5000);
	buyer.BuyBanana(seller, 3000);

	cout << "�Ǹ����� ����" << endl;
	seller.ShowSalesRes();
	cout << "�������� ����" << endl;
	buyer.ShowBuyRes();
	system("pause");
	return 0;
}