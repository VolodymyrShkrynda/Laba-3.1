// Lab_03_1.cpp
// Шкринда Володимир
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 22
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	double z; // результат обчислення виразу
	cout << "x = "; cin >> x;
	A = fabs(x * x * x);
	if (x < -1)
		B= fabs(2 + x) + sqrt(sin(x));
	if (-1 <= x && x <= 1)
		B = atan((x * x * x) + 1) + 1;
	if (x > 1)
		B = exp(cos(x)) + log(1 / x + 1);
	
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	
	if (x < -1)
		B = fabs(2 + x) + sqrt(sin(x));
	else
		if (-1 <= x && x <= 1)
			B = atan((x * x * x) + 1) + 1;
		else
			B = exp(cos(x)) + log(1 / x + 1);
	
	z = A + B;
	cout << "2) z = " << z << endl;
	cin.get();
	return 0;
}