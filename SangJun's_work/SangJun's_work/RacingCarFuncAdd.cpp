#include <iostream>
using namespace std;

#define ID_LEN 30
#define MAX_SPD 220
#define FUEL_STEP 3
#define ACC_STEP 10
#define BRK_STEP 10

struct Car {
	char gamerID[ID_LEN]; //������ ID
	int fuelGauge; // �����ܷ�
	int carSpeed; //�ӵ�

	void ShowCarState() {
		cout << "������ ID : " << gamerID;
		cout << "���ᷮ : " << fuelGauge;
		cout << "�ӵ� : " << carSpeed;
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