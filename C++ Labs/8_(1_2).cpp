#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;
void CenterOfGravity(double x1, double x2, double x3, double y1, double y2, double y3, double m1, double m2, double m3) {
	double x, y;
	x = (x1 * m1 + x2 * m2 + x3 * m3) / (m1 + m2 + m3);
	y = (y1 * m1 + y2 * m2 + y3 * m3) / (m1 + m2 + m3);
	cout << "Координаты центра тяжести равны:" << "\n X: " << x << "\n Y: " << y;
}
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
	CenterOfGravity(x1, x2, x3, y1, y2, y3, m1, m2, m3);
	return 0;

}

