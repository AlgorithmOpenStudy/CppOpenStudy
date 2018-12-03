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
};
void ShowCarState(const Car &car) {
	cout << "������ ID : " << car.gamerID;
	cout << "���ᷮ : " << car.fuelGauge;
	cout << "�ӵ� : " << car.carSpeed;
}
void Accel(Car &car) {
	if (car.fuelGauge <= 0) {
		return;
	}
	else car.fuelGauge == FUEL_STEP;

	if (car.carSpeed + ACC_STEP >= MAX_SPD) {
		return;
	}
	car.carSpeed += ACC_STEP;
}
void Break(Car &car) {
	if (car.carSpeed < BRK_STEP) {
		car.carSpeed = 0;
		return;
	}

	car.carSpeed -= BRK_STEP;
}
int main(void) {
	Car sangjun{ "sangjun", 150, 0 };
	Accel(sangjun);
	Accel(sangjun);
	ShowCarState(sangjun);
	Break(sangjun);
	ShowCarState(sangjun);
	system("pause");
	return 0;
}