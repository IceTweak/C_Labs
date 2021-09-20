#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
	int x1 = -1, x2 = 1;
	double a = 0.5, b = 1.2;
	double w1, w2;
	w1 = pow(2, -x1) * atan(x1 + a) - pow(3, -b * x1) * cos(b * x1);
	cout << w1 << endl;
	w2 = pow(2, -x2) * atan(x2 + a) - pow(3, -b * x2) * cos(b * x2);
	cout << w2;
	return 0;

}