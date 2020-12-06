// lab_4_5.cpp
// Савшак Арсен
// Лабораторна робота No 4.5
// «Попадання» у плоску фігуру
// Варіант 9

#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>

using namespace std;

int main()
{
    double x, y, R;
    cout << "Please, input R: "; cin >> R; // Аргумент для вводу, який визначає радіус та границі

    if (R <= 0){
        cout << "'R' must be more than 0. Please, try again." << endl;// R - це радіус, тому він повинен бути більше 0,
        return 0;  // якщо меньше, то функція завершується з повідомленням про помилку.
}
    srand((unsigned) time(NULL));

    cout << fixed;

   for (int i=0; i<10; i++) // за умовою задачі було зроблено 10 вистрілів
{
       cout << "---------------------------" << endl;
       cout << "Please, input x: "; cin >> x;
       cout << "Please, input y: "; cin >> y;


       if ( (x>=0 && R > 0 && y > 0 && y <=R && y <= pow((x-1), 2) ||
             x <= 0 && y <= 0 && x >= -R && y >= -R))
       {
           cout << "\nYes" << endl;
       }
       else
       {
          cout << "\nNo" << endl;
       }
   }

    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |" << setw(10) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    // Цикл з використанням rand()

    for (int i=0; i<10; i++) // за умовою задачі було зроблено 10 вистрілів
    {
        x = -R + rand() * (R - (-R)) / RAND_MAX; // кожен раз видається число в діапазоні
        y = -R + rand() * (R - (-R)) / RAND_MAX; // від -R до R

        if ((x>=0 && R > 0 && y > 0 && y <=R && y <= pow((x-1), 2) ||
             x <= 0 && y <= 0 && x >= -R && y >= -R))
        {
            cout << "|" << setw(7) << setprecision(3) << x
            << " |" << setw(10) << setprecision(4) << y
            << " |" << "Yes" << endl;
        }
    else
        {
            cout << "|" << setw(7) << setprecision(3) << x
            << " |" << setw(10) << setprecision(4) << y
            << " |" << "No" << endl;
        }
    }
}
