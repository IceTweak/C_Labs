#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int fibo(int n)
{
	if (n == 1)
		return 1;
	if (n == 0)
		return 0;
	return (fibo(n - 1)) + (fibo(n - 2));
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int i = 0, sum = 0;
	do {
		sum += fibo(i);
		i++;
	} while (fibo(i) < 1001);
	printf("Сумма чисел Фибоначчи (меньших 1000) = %d", sum);
	getchar();
	return 0;

}
