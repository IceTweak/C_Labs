#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int arr[18];
	int i = 0, j, elems = 0;
	cout << "Введите 18 чисел: ";
	while (i < 18) {
		cin >> arr[i];
		i++;
	}
	for (j = 0; j < 18; j++) {
		if (arr[j] != arr[17])
			elems += 1;
	}
	printf("\nКоличество элементов отличных от %d - равняется %d", arr[17], elems);
	return 0;
}

