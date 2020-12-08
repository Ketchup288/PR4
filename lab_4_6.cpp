// lab_4_6.cpp
// Савшак Арсен
// Лабораторна робота No 4.6
// Вкладені цикли
// Варіант 9

#include <iostream>
#include <cmath>

using namespace std;


int main()
{

    double P, S; // тимчасові аргументи для вирішення
    int j, i; // вхідні аргументи

    j = 2; 
    P = 1; 

    // Цикл 1

    while (j<=20){
        S = 0;
        i = pow(j, 2);
        while(i<=400){
            S += i;
            i++;
        }
        P = j / (pow(j, 2) + S);
        j++;
        }
    cout << "P = " << P << endl;

    // Цикл 2

    j = 2;
    P = 1;
    do
    {
        S = 0;
        i = pow(j, 2);
        do 
        {
            S+= i;
            i ++;
        }
        while(i<=400);
        P = j / (pow(j,2) + S);
        j ++;
    }
    while(j<=20);
    cout << "P = " << P << endl;

    // Цикл 3

    P = 1;

    for (j = 2; j<=20; j++)
    {
        S = 0;
        for (i = pow(j, 2); i <=400; i++)
        {
            S += i;
        }
        P = j / (pow(j,2) + S);
    }
    cout << "P = " << P << endl;

    // Цикл 4 

    P = 1;
 
    for (j = 20; j >= 2; j--)
    {
        S = 0;
        for (i = 400; i >= j*j; i--)
        {
            S += i; 
        }
    P = j / (pow(j,2) + S); 
    }
    cout << "P = " << P << endl;
}