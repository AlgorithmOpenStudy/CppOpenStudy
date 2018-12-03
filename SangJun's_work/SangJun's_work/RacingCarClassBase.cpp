#pragma warning (disable : 4996)
#include <iostream>
#include <cstring>
using namespace std;

namespace CAR_CONST {
	enum {
		ID_LEN = 50,
		MAX_SPEED = 200,
		FUEL_STEP = 2,
		ACC_STEP=10,
		BRK_STEP=10
	};
}

class Car {
private :
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGuage;
	int curSpeed;
public :
	void InitMembers(char *ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};
void Car::InitMembers(char *ID, int fuel) {
	strcpy(gamerID, ID);
	fuelGuage = fuel;
	curSpeed = 0;
}
void Car::ShowCarState() {
	cout << "소유자 ID : " << gamerID << endl;
	cout << "연료량 : " << fuelGuage << "%" << endl;
	cout << "현재속도 : " << curSpeed << "km/s" << endl;
}
void Car::Accel() {
	if (fuelGuage <= 0)
		return;
	else
		fuelGuage -= CAR_CONST::FUEL_STEP;
	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPEED) {
		curSpeed = CAR_CONST::MAX_SPEED;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}
void Car::Break() {
	if (curSpeed < CAR_CONST::BRK_STEP) {
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}

int main()
{
	Car sangjun;
	sangjun.InitMembers("sangjun", 100 );
	sangjun.Accel();
	sangjun.Accel();
	sangjun.Accel();
	sangjun.ShowCarState();
	sangjun.Break();
	sangjun.ShowCarState();

	system("pause");
	return 0;


}