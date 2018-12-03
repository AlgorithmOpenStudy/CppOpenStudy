#include <iostream>
using namespace std;

#define ID_LEN 30
#define MAX_SPD 220
#define FUEL_STEP 3
#define ACC_STEP 10
#define BRK_STEP 10

struct Car {
	char gamerID[ID_LEN]; //소유자 ID
	int fuelGauge; // 연료잔량
	int carSpeed; //속도

	void ShowCarState() {
		cout << "소유자 ID : " << gamerID;
		cout << "연료량 : " << fuelGauge;
		cout << "속도 : " << carSpeed;
	}
	void Accel() {
		if (fuelGauge <= 0) {
			return;
		}
		else fuelGauge -= FUEL_STEP;

		if (carSpeed + ACC_STEP >= MAX_SPD) {
			return;
		}
		carSpeed += ACC_STEP;
	}
	void Break() {
		if (carSpeed < BRK_STEP) {
			carSpeed = 0;
			return;
		}

		carSpeed -= BRK_STEP;
	}
};

int main(void) {
	Car sangjun{ "sangjun", 150, 0 };
	sangjun.Accel();
	sangjun.Accel();
	sangjun.ShowCarState();
	sangjun.Break();
	sangjun.ShowCarState();
	system("pause");
	return 0;
}