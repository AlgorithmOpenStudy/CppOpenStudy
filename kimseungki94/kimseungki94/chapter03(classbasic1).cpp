#include<iostream>
using namespace std;


class Buyer {
private:
	int money;
	int fish;
	int amount;
public:
	void initamount(int money, int fish, int amount);
	void buymount(int money, int fish, int amount);
	void showmount();
	int fi();
	int am();
	int mo();

};
class Seller {
private:
	int money;
	int fish;
	int amount;
public:
	void initamount(int money, int fish, int amount);
	void sellmount(Buyer &buyer, int money, int fish, int amount);
	void showmount();
	int fi();
	int am();
	int mo();
};
int main() {
	Seller seller;
	seller.initamount(20000, 1000, 30);
	seller.showmount();
	Buyer buyer;
	buyer.initamount(30000, 1000, 3);
	seller.sellmount(buyer, 30000, 1000, 3);
	seller.showmount();
	system("pause");
}
void Seller::initamount(int money, int fish, int amount) {
	Seller::money = money;
	Seller::fish = fish;
	Seller::amount = amount;
}
void Seller::showmount() {
	cout << "생선장수 돈 : " << Seller::money << endl;
	cout << "생선장수 생선가격 : " << Seller::fish << endl;
	cout << "생선장수 총 자산 : " << Seller::amount << endl;
}
void Seller::sellmount(Buyer &buyer, int money, int fish, int amount) {
	Seller::money += buyer.fi()*buyer.am();
	Seller::fish;
	Seller::amount -= buyer.am();
}
int Buyer::fi() {
	return Buyer::fish;
}
int Buyer::am() {
	return Buyer::amount;
}
int Buyer::mo() {
	return Buyer::money;
}
void Buyer::initamount(int money, int fish, int amount) {
	Buyer::money = money;
	Buyer::fish = fish;
	Buyer::amount = amount;
}
void Buyer::showmount() {
	cout << "생선장수 돈 : " << Buyer::money << endl;
	cout << "생선장수 생선가격 : " << Buyer::fish << endl;
	cout << "생선장수 총 자산 : " << Buyer::amount << endl;
}