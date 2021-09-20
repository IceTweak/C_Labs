#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int num, res;
	cout << "Введите число:\n";
	cin >> num;
	res = num % 8;
	switch (res)
	{
	case 0: cout << "Ноль"; break;
	case 1: cout << "Один"; break;
	case 2: cout << "Два"; break;
	case 3: cout << "Три"; break;
	case 4: cout << "Четыре"; break;
	case 5: cout << "Пять"; break;
	case 6: cout << "Шесть"; break;
	case 7: cout << "Семь"; break;
	}
	return 0;

}
