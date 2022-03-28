#include <iostream>
#include <Windows.h>
#include <cmath>
#include <iomanip>
#include "Account.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Account a, b, c, d;
	a.setSecondname("Петренко");
	a.setNo(1);
	a.setPercent(6.4);
	a.setSumma();
	int no;
	do {
		a.Display();
		cout << "Власник рахунку:" << fixed << setprecision(2) << a.getSecondame() << endl;
		cout << "Виберіть дію" << endl;
		cout << "[1] - змінити власника рахунку" << endl;
		cout << "[2] - зняти деяку суму грошей з рахунку" << endl;
		cout << "[3] - покласти гроші на рахунок" << endl;
		cout << "[4] - нарахувати відсотки" << endl;
		cout << "[5] - перевести суму в долари" << endl;
		cout << "[6] - перевести суму в євро" << endl;
		cout << "[7] - отримати суму прописом" << endl;
		cout << "[8] - додавання сум" << endl;
		cout << "[9] - віднімання сум" << endl;
		cout << "[10] - ділення сум" << endl;
		cout << "[11] - ділення суми на дробове число" << endl;
		cout << "[12] - множення на дробове число" << endl;
		cout << "[13] - операції порівняння" << endl;
		cout << "[0] - завершити виведення" << endl;
		cout << "Введіть значення: "; cin >> no;
		cout << endl;

		switch (no)
		{
		case 1:
			a.ChangeOwner();
			break;
		case 2:
			a.GetMoney();
			break;
		case 3:
			a.AddMoney();
			break;
		case 4:
			a.MakePercent();
			break;
		case 5:
			a.ToDollar();
			break;
		case 6:
			a.ToEuro();
			break;
		case 7:
			a.Propys();
			break;
		case 8:
			b.setSumma();
			b.Display();
			c = c.Add(a, b);
			cout << "відповідь: " << endl;
			c.Display();
			break;
		case 9:
			b.setSumma();
			b.Display();
			d.Subtract(a, b);
			cout << "відповідь: " << endl;
			d.Display();
			break;
		case 10:
			b.setSumma();
			b.Display();
			a.DivOfSums(a,b);
			cout << "відповідь: " << endl;;
			a.Display();
			break;
		case 11:
			double x;
			cout << "На яке число сума має бути поділена? : "; cin >> x;
			a.Division(x);
			cout << "відповідь: " << endl;
			a.Display();
			break;
		case 12:
			cout << "На яке число сума має бути помножена? : "; cin >> x;
			a.Multiply(x);
			cout << "відповідь: " << endl;
			a.Display();
			break;
		case 13:
			b.setSumma();
			b.Display();
			if (Less(a, b) == true)
				cout << "перша сума менша за другу" << endl;
			if (NLess(a, b) == true)
				cout << "друга сума менша за першу" << endl;
			if (Great(a, b) == true)
				cout << "перша сума більша за другу" << endl;
			if (NGreat(a, b) == true)
				cout << "друга сума більша за першу" << endl;
			if (Equal(a, b) == true)
				cout << "перша і друга сама рівна" << endl;
			if (NEqual(a, b) == true)
				cout << "перша і друга сума не рівна" << endl;
			break;
		}
		cout << endl;
	} while (no != 0);

	return 0;
}
