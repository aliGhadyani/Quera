#include <iostream>

using namespace std;

double namaee(double, double);

int main()
{
    double x, n;
    cin >> x >> n;
    double a = namaee(x, n);
    double f = a;
    cout.precision(3);
    cout << fixed << f;
    return 0;
}
double namaee(double x, double n)
{
    double jam = 1;
    for (int i = 1; i < n; i++)
    {
        double fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact = j * fact;
        }
        double powe = 1;
        for (int k = 1; k <= i; k++)
        {
            powe = powe * x;
        }
        jam = jam + (powe / fact);
    }
    return jam;
}
