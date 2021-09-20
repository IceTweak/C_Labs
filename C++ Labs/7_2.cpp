#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int matrix[10][10];
	int i, j;
	for (i = 1; i < 11; i++) {
		for (j = 1; j < 11; j++) {
			matrix[i][j] = i * j;
			printf("%4d", matrix[i][j]);
		}
		cout << endl;
	}
	getchar();
	return 0;

}


