﻿#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double pi = M_PI;
	double a = 0, b = pi, n = 20, F1, F2;
	double dx = fabs(b - a) / (n - 1);
	double x = a;
	int i;
	double xArr[20], F1Arr[20], F2Arr[20];
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
	printf(" ______________________________ \n");
	getchar();
	return 0;

}


