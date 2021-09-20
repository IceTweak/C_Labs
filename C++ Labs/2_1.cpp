#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, a = -0.8, z;
	cout << "Введите значение x:\n";
	cin >> x;
	if (x > 1)
		z = sin(cos(a * x));
	else if (x == 1)
		z = tan(a * x);
	else
		z = a * a * x;
	cout << "Значение функции z(x) = " << z;
	return 0;

}
