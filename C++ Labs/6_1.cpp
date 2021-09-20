#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int arr[18] = {0, 1, 3, 7, 12, 7, 15, 124, 14, 7, 7, 123, 54, 41, 23, 7, 67, 7};
	int i, elems = 0;
	for (i = 0; i < 18; i++) {
		if (arr[i] != arr[17])
			elems += 1;
		}
	printf("Количество элементов отличных от %d - равняется %d", arr[17], elems);
	return 0;
}

