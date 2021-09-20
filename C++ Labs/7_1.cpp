#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int matrix[6][6];
	int i, j;
	int num;
	bool flag = 1;
	string s = "Матрица семмитрична относительно главной оси.";
	cout << "Введите матрицу 6х6:\n";
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			cin >> num;
			matrix[i][j] = num;
		}
	}
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (matrix[i][j] != matrix[j][i]){
				s = "Матрица не является симметричной";
				flag = 0;
				break;
			}
		}
		if (flag == 0)
			break;
	}
	cout << s << endl;
	getchar();
	return 0;

}


