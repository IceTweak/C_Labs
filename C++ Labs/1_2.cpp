#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double m1, m2, m3;
	cout << "Введите массы m1, m2, m3: \n";
	cin >> m1 >> m2 >> m3;
	double x1, x2, x3, y1, y2, y3;
	cout << "Введите координаты 1-ой точки: \n";
	cin >> x1 >> y1;
	cout << "Введите координаты 2-ой точки: \n";
	cin >> x2 >> y2;
	cout << "Введите координаты 3-ей точки: \n";
	cin >> x3 >> y3;
	double x, y;
	x = (x1 * m1 + x2 * m2 + x3 * m3) / (m1 + m2 + m3);
	y = (y1 * m1 + y2 * m2 + y3 * m3) / (m1 + m2 + m3);
	cout << "Координаты центра тяжести равны:" << "\n X: " << x << "\n Y: " << y;
	return 0;

}
