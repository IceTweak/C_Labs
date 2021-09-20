#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;
void funcTab(double a, double b, int n) {

	double F1, F2;
	double dx = fabs(b - a) / (double(n) - 1);
	double x = a;
	int i;
	double* xArr = new double[n]; 
	double* F1Arr = new double[n];
	double* F2Arr = new double[n];
	printf(" ______________________________ \n");
	printf("| I |	   X |	   F1 |	    F2 | \n");
	printf("|---|--------|--------|--------|\n");
	for (i = 1; x <= b; ++i)
	{
		F1 = exp(-x) * cos(2 * x);
		F2 = exp(-2 * x);
		xArr[i] = x;
		F1Arr[i] = F1;
		F2Arr[i] = F2;
		printf("|%3d|%8.3f|%8.4f|%8.4f|\n", i, xArr[i], F1Arr[i], F2Arr[i]);
		x += dx;
	}
	printf(" ______________________________ \n\n");
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double pi = M_PI;
	funcTab(0, pi, 20);
	funcTab(0, 3 * pi / 2, 5);
	getchar();
	return 0;

}

