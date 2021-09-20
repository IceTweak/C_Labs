#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
	double x, z;
	printf("-------------------------------\n");
	printf("    a|      x|          y |\n");
	printf("-------------------------------\n");
	double a = 0.1;
	do {
		printf("%5.2f\n", a);
		x = 0.1;
		do {
			if (x <= 0.5)
				z = pow(sin(x) * sin(x) + a, 2) * exp(a * sin(x));
			else
				z = tan(x / 4);
			printf(" %12.2f| %10.2f |\n", x, z);
			x += a;
		} while (x < 0.91);
		printf("-------------------------------\n");
		a += 0.1;
	} while (a < 0.31);
}
