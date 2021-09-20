#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;
double func(int x, double a, double b) {
	return pow(2, -x) * atan(x + a) - pow(3, -b * x) * cos(b * x);
}
int main()
{
	int x1 = -1, x2 = 1;
	double a = 0.5, b = 1.2;
	double w1, w2;
	cout << func(x1, a, b) << endl;
	cout << func(x2, a, b);
	return 0;

}

