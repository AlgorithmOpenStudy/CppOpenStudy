#include <iostream>
#pragma warning (disable : 4996)
using namespace std;

class Employee {
private:
	char name[100];
public:
	Employee(char *name) {
		strcpy(this->name, name);
	}
	void ShowYourName() const {
		cout << "이름 : " << name << endl;
	}
	virtual  int getPay() const = 0;
	virtual void ShowSalaryInfo() const = 0;
};

class PermanentWorker : public Employee {
private:
	int salary;
public:
	PermanentWorker(char *name, int money)
		:Employee(name), salary(money) {

	}
	int getPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "월금 : " << getPay() << endl <<endl;
	}
};

class TemporaryWorker : public Employee {
private:
	int WorkTime;
	int PayPerhour;
public:
	TemporaryWorker(char *name, int pay) : Employee(name), WorkTime(0), PayPerhour(pay) {}
	void AddWorkTime(int time) {
		WorkTime += time;
	}
	int getPay() const {
		return WorkTime * PayPerhour;
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "월급 : " << getPay() << endl << endl;
	}
};
class SalesWorker : public PermanentWorker {
private:
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(char *name, int money, double ratio) : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {}
	void AddSalesResult(int value) {
		salesResult += value;
	}
	int getPay() const {
		return PermanentWorker::getPay()
			+ (int)(salesResult*bonusRatio);
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "월급 : " << getPay() << endl << endl;
	}
};
class EmployeeHandler {
private : 
	PermanentWorker *empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0) {}
	void AddEmployee(PermanentWorker *emp) {
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const {
		for (int i; i < empNum; i++)
			empList[i]->ShowSalaryInfo();
	}
	void ShowTotalInfo() const {
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->getPay();
		cout << "월급 합계 : " << sum << endl;
	}
	~EmployeeHandler() {
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}

};

namespace Risk_Lev {
	enum { R_A = 30, R_B = 20, R_C = 10};
}

class ForeignSalesWorker : public SalesWorker {
private:
	int Risk_lev;
public:
	ForeignSalesWorker(char *name, int money, double ratio, int risk):SalesWorker(name, money, ratio), Risk_lev(risk){} 
	int GetRiskPay() const {
		return (int)(SalesWorker::getPay() * (Risk_lev / 100.0));
	}
	int getPay() const {
		return SalesWorker::getPay() + GetRiskPay();
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "월급 : " << SalesWorker :: getPay() << endl << endl;
		cout << "위험수당 : " << GetRiskPay() << endl << endl;
		cout << "합계 : " << getPay() << endl << endl;
	}
	
};

int main() {
	EmployeeHandler handler;

	ForeignSalesWorker *fseller1= new ForeignSalesWorker ("Yang", 200, 0.1, Risk_Lev::R_A);
	fseller1->AddSalesResult(800);
	handler.AddEmployee(fseller1);

	ForeignSalesWorker *fseller2 = new ForeignSalesWorker ("Kim", 300, 0.1, Risk_Lev::R_B);
	fseller2->AddSalesResult(600);
	handler.AddEmployee(fseller2);

	ForeignSalesWorker *fseller3 = new ForeignSalesWorker ("Kim2", 400, 0.1, Risk_Lev::R_C);
	fseller3->AddSalesResult(700);
	handler.AddEmployee(fseller3);

	handler.ShowAllSalaryInfo();
	system("pause");
	return 0;
}