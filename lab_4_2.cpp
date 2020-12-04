// lab_4_2.cpp
// Савшак Арсен
// Лабораторна робота No 4.2
// Табуляція функції, заданої 
// формулою: функція однієї змінної.
// Варіант 9

#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double x, y, A, B;
    double xp, xk, dx; // Аргументи, для вводу з клавіатури

    cout << "Please, input xp: "; cin >> xp; // X_початкова
    cout << "Please, input xk: "; cin >> xk; // X_кінцева
    cout << "Please, input dx: "; cin >> dx; // Крок функції

    cout << fixed;

    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |" << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while(x<=xk){
        A = 2 * pow(abs(x),3);
        if (x<=-0.1){
            B = 5 * cos(18*x);
        }
        else{
            if (x>-0.1 && x < 1.2){
                    B = atan((x+2)/5);
        }
            else{
                    B = cos(x+18)/sin(x+18);
        }
        }
        y = A - B;
        cout << "|" << setw(7) << setprecision(2) << x
        << " |" << setw(10) << setprecision(3) << y
        << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

}
