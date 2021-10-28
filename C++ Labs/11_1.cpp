#include <iostream>
#include <stdio.h>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

int* PrintDiag(int matrix[6][6]) {
	int i, j;
	int *diag = new int[6];
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (i == j)
				diag[i] = matrix[i][j];
		}
	}
	return diag;
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
	fstream source;
	fstream output;
	string pathSource = "C:\\Users\\IceTweak\\Desktop\\source.txt";
	string pathOutput = "C:\\Users\\IceTweak\\Desktop\\output.txt";
	source.open(pathSource, fstream::in);
	int i, j, sum = 0;
	int matrix[6][6];
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			source >> matrix[i][j];
		}
	}
	source.close();

	output.open(pathOutput, fstream::out);
	output << "Элементы главной диагонали:\n";
	for (i = 0; i < 6; i++) {
		output << PrintDiag(matrix)[i] << " ";
	}
	output << "\nСумма элементов главной диагонали = " << SumOfDiag(matrix, &sum);
	output << "\nСумма элементов побочной диагонали = " << sum;
	output.close();
	return 0;
}

