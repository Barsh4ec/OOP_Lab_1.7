#pragma once
#include "Money.h"
#include <string>
using namespace std;

class Account
{
private:
	string secondname;
	int no;
	double percent;
	Money summa;
public:
	string getSecondame() const { return secondname; }
	int getNo() const { return no; }
	double getPercent() const { return percent; }
	Money getSumma() const { return summa; }

	void setSecondname(string);
	bool setNo(int);
	bool setPercent(double);
	void setSumma();

	void Display();
	string toString() const;
	bool Init(int no, double percent);
	string Read(string);
	int Read(int);
	void ChangeOwner();
	void GetMoney();
	void AddMoney();
	void MakePercent();
	void ToDollar();
	void ToEuro();
	void Propys();

	Account Add(const Account, const Account);
	Account Subtract(const Account, const Account);
	Account Multiply(const double);
	Account Division(const double);
	Account DivOfSums(const Account, const Account);
	Account Change(int, int);
	friend bool Less(Account x, Account y);
	friend bool NLess(Account x, Account y);
	friend bool Great(Account x, Account y);
	friend bool NGreat(Account x, Account y);
	friend bool Equal(Account x, Account y);
	friend bool NEqual(Account x, Account y);
};

