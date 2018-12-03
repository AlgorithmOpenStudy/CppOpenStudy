#include <iostream>
using namespace std;
class Calculater {
private :
	int mathadd;
	int mathsub;
	int mathdiv;
	int mathmulti;
public :
	void Init();
	double add(double a1, double a2);
	double sub(double a1, double a2);
	double div(double a1, double a2);
	double multi(double a1, double a2);
	void Show();
};

void Calculater::Init() {
	mathadd = 0;
	mathsub = 0;
	mathdiv = 0;
	mathmulti = 0;
}

double Calculater::add(double a1, double a2) {
	mathadd++;
	return a1 + a2;
}
double Calculater::sub(double a1, double a2) {
	mathsub++;
	return a1 - a2;
}
double Calculater::div(double a1, double a2) {
	mathdiv++;
	return a1 / a2;
}
double Calculater::multi(double a1, double a2) {
	mathmulti++;
	return a1 * a2;
}
void Calculater :: Show() {
	cout << "µ¡¼À : " << mathadd;
	cout << "»¬¼À : " << mathsub;
	cout << "³ª´°¼À : " << mathdiv;
	cout << "°ö¼À : " << mathmulti;
}