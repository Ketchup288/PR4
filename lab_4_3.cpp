// lab_4_3.cpp
// Савшак Арсен
// Лабораторна робота No 4.3
// Табуляція функції, заданої
// формулою: функція з параметрами
// Варіант 9

#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double x, F;
    double a, b, c, xp, xk, dx; // Аргументи, для вводу з клавіатури

    cout << "Please, input xp: "; cin >> xp; // X_початкова
    cout << "Please, input xk: "; cin >> xk; // X_кінцева
    cout << "Please, input dx: "; cin >> dx; // Крок функції
    cout << "Please, input a: "; cin >> a; // Аргумент функції
    cout << "Please, input b: "; cin >> b; // Аргумент функції
    cout << "Please, input c: "; cin >> c; // Аргумент функції


    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |" << setw(9) << "F" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while(x<=xk){
        if (a<0 && x!= 0){
            F = a * pow(x, 2) + pow(b, 2) * x;
        }
        else{
            if (a > 0 && x == 0){
                    F = x - a/(x-c);
        }
            else{
                    F = 1 + x/c;
        }
        }
        cout << "|" << setw(7) << setprecision(2) << x
        << " |" << setw(10) << setprecision(3) << F
        << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

}
