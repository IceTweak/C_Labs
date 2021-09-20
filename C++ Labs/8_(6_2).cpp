#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;
void DiffNums(int arr[18]) {
	int i, elems = 0;
	for (i = 0; i < 18; i++) {
		if (arr[i] != arr[17])
			elems += 1;
	}
	printf("\nКоличество элементов отличных от %d - равняется %d", arr[17], elems);

}
int main()
{
	setlocale(LC_ALL, "Russian");
	int arr[18];
	int i = 0;
	cout << "Введите 18 чисел: ";
	while (i < 18) {
		cin >> arr[i];
		i++;
	}
	DiffNums(arr);
	return 0;
}

