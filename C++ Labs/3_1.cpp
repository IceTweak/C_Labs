#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i, j;
	double e = 1;
	cout << "Введите n:\n";
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		double factor = 1;
		for (j = 1; j <= i; ++j)
		{
			factor *= j;
		}
		e += 1 / factor;
	}
	e = round(e * pow(10, 5)) / pow(10, 5); // Округление до 5 знаков 
	double ex = exp(1);
	ex = round(ex * pow(10, 5)) / pow(10, 5); // то же
	if (e == ex)
	{
		cout << "Значение выражения совпадает со значением функции EXP(1)\n";
		cout << "e = " << e;
		cout << "\nEXP(1) = " << ex;
	}
	else
	{
		cout << "Значение выражения не совпадает со значением функции EXP(1)\n";
		cout << "e = " << e;
		cout << "\nEXP(1) = " << ex;
	}
	getchar();
	return 0;

}
