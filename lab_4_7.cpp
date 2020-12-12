// #include <iostream>
// #include <iomanip>
// #include <cmath>
// using namespace std;
// int main()
// {
// 	double xp, x, dx, eps, a=0, R=0, S=0;
// 	xk = 1; // за умовою задачі
// 	int n = 0;
// 	cout << "xp = "; cin >> xp;
// 	cout << "dx = "; cin >> dx;
// 	cout << "eps = "; cin >> eps;
// 	cout << fixed;
// 	cout << "-------------------------------------------------" << endl;
// 	cout << "|" << setw(5) << "x" << " |"
// 	<< setw(10) << "exp(x)" << " |"
// 	<< setw(7) << "S" << " |"
// 	<< setw(5) << "n" << " |"
// 	<< endl;
// 	cout << "-------------------------------------------------" << endl;
// 	x = xp;
// 	while (abs(x) <= xk)
// 	{
// 		n = 0; // вираз залежить від умови завдання варіанту
// 		a = 1; // вираз залежить від умови завдання варіанту
// 		S = a;
// 		do{
// 			n++;
// 			R = ((pow(-1, n)*pow(x,2*n+1))/2*n-1) * ((pow(-1, n)*pow(x,2*n+1))/2*n-1); // вираз залежить від умови завдання варіанту
// 			a *= R;
// 			S += a;
// 		}while (abs(a)>=eps);

// 	cout << "|" << setw(8) << setprecision(2) << x << " |"
// 	<< setw(11) << setprecision(5) << exp(x) << " |"
// 	<< setw(11) << setprecision(5) << S << " |"
// 	<< setw(9) << n << " |"
// 	<< endl;

// 	x += dx;
// 	}

// 	cout << "-------------------------------------------------" << endl;
// }



#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;
 
int main()
{
    double a, b, d, x, e;
    double Pi = 3.14;
    //cin >> a >> b >> d >> e;
    a = 0, b = 1, d = 0.1, e = 0.0001;
    x = a;
    float N = 10000.f;
    while (x <= b)
    {
        int  n = 0;
        double sum = 0;
        double E = 0;
        do
        {
            sum += pow(-1.0, n) * pow(x, 2 * n + 1) / (2 * n + 1);
            ++n;
            E = 1.0 / (2 * n + 1);
        } while (E >= e);
        sum = floor(sum * N + 0.5f) / N;
        cout << x << " " << sum << " " << n << " " << "Value" << endl;
        x += d;
    }
}