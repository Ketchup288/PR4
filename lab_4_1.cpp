#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double S; // змінна результату виразів
    int i; // тимчасовий аргумент для вирішення функції
    int N; // тимчасовий аргумент для вирішення функції


    // Цикл ПОКИ з ПЕРЕД-умовою


    i = 1;
    N = 15;
    while(i<=15){
        S += (sin(10*i) + cos(10/i))/sqrt(i);
        i ++;
    }

    cout << "S = " << S << endl;

    // Цикл ПОКИ з ПІСЛЯ-умовою

    i = 1;
    N = 15;
    S = 0;
    do {
        S += (sin(10*i) + cos(10/i))/sqrt(i);
        i ++;
    }
    while (i<=15);

    cout << "S = " << S << endl;

    // Цикл ПОКИ з ПЕРЕД-умовою

    N = 15;
    S = 0;
    for (i = 1; i<=15; i++){
        S += (sin(10*i) + cos(10/i))/sqrt(i);
    }

    cout << "S = " << S << endl;

    // Цикл ПОКИ з ПЕРЕД-умовою(обернений)

    S = 0;
    N = 15;
    for (i=N; i >= 1; i--){
        S += (sin(10*i) + cos(10/i))/sqrt(i);
    }
    cout << "S = " << S << endl;

}
