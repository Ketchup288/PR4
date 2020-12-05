// lab_4_4.cpp
// Савшак Арсен
// Лабораторна робота No 4.4
// Табуляція функції, заданої графіком
// Варіант 9

#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double x, y;
    double xp, xk, dx; // Аргументи, для вводу з клавіатури

    cout << "Please, input xp: "; cin >> xp; // X_початкова
    cout << "Please, input xk: "; cin >> xk; // X_кінцева
    cout << "Please, input dx: "; cin >> dx; // Крок функції

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |" << setw(9) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while(x<=xk){
        if (x<= -7){
                y = 0;
            }
            else{
               if (-7<x && x<= -3) {
                   y = x + 7;
               }
               else {
                   if (-3 < x && x <= -2){
                       y = 4;
                   }
                   else {
                       if (x > -2 && x <= 2){
                           y = pow(x, 2);
                       }
                       else{
                           if(x > 2 && x <= 4){
                               y = 4 - x;
                           }
                           else{
                               y = 0;
                           }
                       }
                   }
               }
        }
        cout << "|" << setw(7) << setprecision(2) << x
        << " |" << setw(10) << setprecision(3) << y
        << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

}
