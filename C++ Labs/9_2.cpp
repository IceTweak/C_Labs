#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

void PrintDiag(int matrix[6][6]) {
	int i, j;
	cout << "\nЭлементы главной диагонали:\n";
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (i == j)
				cout << matrix[i][j] << " ";
		}
	}
}

int SumOfDiag(int matrix[6][6], int* sideDiag) {
	int i, j;
	*sideDiag = 0;
	int mainDiag = 0;
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (i == j)
				mainDiag += matrix[i][j];
		}
	}
	i = 0;
	j = 5;
	while (j >= 0) {
		*sideDiag += matrix[i][j];
		i++;
		j--;
	}
	return mainDiag;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int sideSum1 = 0, sideSum2 = 0;
	int matrix1[6][6] = { {1, 2, 4, 5, 6, 7}, {3, 6, 8, 12, 34, 56}, {12, 13, 34, 23, 35, 6},
		{3, 6, 8, 12, 34, 56}, {8, 9, 10, 12, 13, 56}, {1, 2, 67, 45, 56, 67} };
	int matrix2[6][6] = { {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6},
		{1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6} };
	PrintDiag(matrix1);
	PrintDiag(matrix2);
	printf("\nСумма элементов главной диагонали = %d", SumOfDiag(matrix1, &sideSum1));
	printf("\nСумма элементов побочной диагонали = %d", sideSum1);

	printf("\nСумма элементов главной диагонали = %d", SumOfDiag(matrix2, &sideSum2));
	printf("\nСумма элементов побочной диагонали = %d", sideSum2);

}
