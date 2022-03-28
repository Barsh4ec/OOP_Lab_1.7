#include "Money.h"

using namespace std;

void Money::setH500(const int x) { h500 = x; };
void Money::setH200(const int x) { h200 = x; };
void Money::setH100(const int x) { h100 = x; };
void Money::setH50(const int x) { h50 = x; };
void Money::setH20(const int x) { h20 = x; };
void Money::setH10(const int x) { h10 = x; };
void Money::setH5(const int x) { h5 = x; };
void Money::setH2(const int x) { h2 = x; };
void Money::setH1(const int x) { h1 = x; };
void Money::setC50(const int x) { c50 = x; };
void Money::setC25(const int x) { c25 = x; };
void Money::setC10(const int x) { c10 = x; };
void Money::setC5(const int x) { c5 = x; };
void Money::setC2(const int x) { c2 = x; };
void Money::setC1(const int x) { c1 = x; };

void Money::Init(int hh500, int hh200, int hh100, int hh50,
	int hh20, int hh10, int hh5, int hh2, int hh1,
	int cc50, int cc25, int cc10, int cc5, int cc2, int cc1)
{
	hh500 > 0 ? h500 = hh500 : h500 = 0;
	hh200 > 0 ? h200 = hh200 : h200 = 0;
	hh100 > 0 ? h100 = hh100 : h100 = 0;
	hh50 > 0 ? h50 = hh50 : h50 = 0;
	hh20 > 0 ? h20 = hh20 : h20 = 0;
	hh10 > 0 ? h10 = hh10 : h10 = 0;
	hh5 > 0 ? h5 = hh5 : h5 = 0;
	hh2 > 0 ? h2 = hh2 : h2 = 0;
	hh1 > 0 ? h1 = hh1 : h1 = 0;
	cc50 > 0 ? c50 = cc50 : c50 = 0;
	cc25 > 0 ? c25 = cc25 : c25 = 0;
	cc10 > 0 ? c10 = cc10 : c10 = 0;
	cc5 > 0 ? c5 = cc5 : c5 = 0;
	cc2 > 0 ? c2 = cc2 : c2 = 0;
	cc1 > 0 ? c1 = cc1 : c1 = 0;
}

void Money::Read()
{
	int hh500, hh200, hh100, hh50, hh20, hh10, hh5, hh2, hh1, cc50, cc25, cc10, cc5, cc2, cc1;
	cout << "Веедіть кількість кожної купюри:" << endl;
	cout << "500 = "; cin >> hh500;
	cout << "200 = "; cin >> hh200;
	cout << "100 = "; cin >> hh100;
	cout << "50 = "; cin >> hh50;
	cout << "20 = "; cin >> hh20;
	cout << "10 = "; cin >> hh10;
	cout << "5 = "; cin >> hh5;
	cout << "2 = "; cin >> hh2;
	cout << "1 = "; cin >> hh1;
	cout << "0.50 = "; cin >> cc50;
	cout << "0.25 = "; cin >> cc25;
	cout << "0.10 = "; cin >> cc10;
	cout << "0.5 = "; cin >> cc5;
	cout << "0.02 = "; cin >> cc2;
	cout << "0.01 = "; cin >> cc1;
	Init(hh500, hh200, hh100, hh50, hh20, hh10, hh5, hh2, hh1, cc50, cc25, cc10, cc5, cc2, cc1);
}

double Money::Total() {
	int hrn, kop;
	double sum;
	hrn = h500 * 500 + h200 * 200 + h100 * 100 +
		h50 * 50 + h20 * 20 + h10 * 10 + h5 * 5 + h2 * 2 + h1;
	kop = c50 * 50 + c25 * 25 + c10 * 10 + c5 * 5 + c2 * 2 + c1;
	sum = (double)hrn + (double)kop / 100.;
	return sum;
}

string Money::toString() const
{
	stringstream sout;
	int a = h500 * 500 + h200 * 200 + h100 * 100 +
		h50 * 50 + h20 * 20 + h10 * 10 + h5 * 5 + h2 * 2 + h1;
	int b = c50 * 50 + c25 * 25 + c10 * 10 + c5 * 5 + c2 * 2 + c1;
	while (b >= 100)
	{
		b -= 100;
		a += 1;
	}
	if (b < 10)
		sout << "Cума = " << a << ",0" << b << endl;
	else
		sout << "Сума = " << a << "," << b << endl;

	return sout.str();
}

void Money::Display() const
{
	cout << toString();
}