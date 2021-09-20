#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
#include <limits>
using namespace std;
int Zfunc(int A[6], int B[8]) {
	int i, j, Z, minA = INT_MAX, minB = INT_MAX;
	for (i = 0; i < 6; i++) {
		if (A[i] < minA)
			minA = A[i];
	}
	for (j = 0; j < 8; j++) {
		if (B[j] < minB)
			minB = B[j];
	}
	if (minA > minB)
		Z = (minA + minB) / minB;
	else
		Z = (minA + minB) / minA;
	return Z;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, j;
	int A[6]; 
	int B[8];
	cout << "Введите 6 чисел для первого массива:\n";
	for (i = 0; i < 6; i++) {
		cin >> A[i];
	
	}
	cout << "\nВведите 8 чисел для второго массива:\n";
	for (j = 0; j < 8; j++) {
		cin >> B[j];
	}
	printf("\nЗначение функции Z = %d", Zfunc(A, B));
	int C[6] = {12, 14, -5, 123, 45, 45};
	int D[8] = {42, 234, 546, 123, 745, 567, 123, 765};
	printf("\nЗначение функции Z = %d", Zfunc(C, D));
	return 0;

}

