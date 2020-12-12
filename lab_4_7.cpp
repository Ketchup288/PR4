// lab_4_7.cpp
// Савшак Арсен
// Лабораторна робота No 4.7
// Обчислення суми ряду Тейлора
// за допомогою ітераційних циклів та рекурентних
// Варіант 9


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

	double xp, xk, xd, eps, x, S, R = 0;

	cout << "xp = "; cin >> xp; // x початкова
	cout << "xk = "; cin >> xk; // x кінцева
	cout << "xd = "; cin >> xd; // крок функції 
	cout << "eps = "; cin >> eps; // точність функції 

	cout << fixed;

	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
			<< setw(10) << "atan(x)" << " |"
			<< setw(9) << "S" << " |"
			<< setw(10) << "n" << " |"
			<< endl;
	cout << "-------------------------------------------------" << endl;

	double n = 0; // за умовою
	double a = 1;
	for (x = xp; x <= xk; x+=xd)
	{
		S = 0;
		do {
			R = (pow(-1, n) * pow(x, 2 * n + 1)) / (2 * n + 1);
			a *= R;
			S += a;
			n ++;
		}
 		while (abs(a) >= eps);
}

	cout << "|" << setw(8) << setprecision(2) << x << " |"
	<< setw(11) << setprecision(5) << atan(x) << " |"
	<< setw(11) << setprecision(5) << S << " |"
	<< setw(9) << n << " |"
	<< endl;
}