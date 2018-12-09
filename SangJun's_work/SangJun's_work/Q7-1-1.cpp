#include <iostream>
#pragma warning (disable : 4996)
using namespace std;

class Car {
private :
	int gasolineGauge;
public:
	int GetGasGauge(){
		return gasolineGauge;
	}
	Car(int gas) : gasolineGauge(gas) {

	}
};

class HybridCar : public Car {
private :
	int electricGauge;
public:
	int GetElecGauge() {
		return electricGauge;
	}
	HybridCar(int gas, int elec) : Car(gas), electricGauge(elec) {}
};

class HybridWaterCar : public HybridCar {
private:
	int waterGauge;
public:
	HybridWaterCar(int gas, int elec, int water) : HybridCar(gas, elec), waterGauge(water) {};
	void ShowCurrentGauge() {
		cout << "ÀÜ¿© °¡¼Ö¸° : " << GetGasGauge() << endl;
		cout << "ÀÜ¿© Àü±â·® : " << GetElecGauge() << endl;
		cout << "ÀÜ¿© ¹° : " << waterGauge << endl;

	}
};

int main() {
	HybridWaterCar wCar(60, 50, 90);
	wCar.ShowCurrentGauge();
	system("pause");
	return 0;
}