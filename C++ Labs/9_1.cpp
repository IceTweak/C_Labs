#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>

using namespace std;

void SimmMatrix(int matrix[6][6]) {
	int i, j;
	bool flag = 1;
	string s = "\nМатрица семмитрична относительно главной оси.";
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (matrix[i][j] != matrix[j][i]) {
				s = "\nМатрица не является симметричной";
				flag = 0;
				break;
			}
		}
		if (flag == 0)
			break;
	}
	cout << s << endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int matrix[6][6];
	int matrix2[6][6] = { {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, 
	{1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6} };
	int i, j;
	cout << "Введите матрицу 6х6:\n";
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			cin >> matrix[i][j];
			
		}
	}
	SimmMatrix(matrix);
	SimmMatrix(matrix2);
	getchar();
	return 0;

}


